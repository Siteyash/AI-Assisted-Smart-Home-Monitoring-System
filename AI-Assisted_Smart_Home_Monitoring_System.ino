
#define BLYNK_TEMPLATE_ID "TMPL3hP-Q9Sju"
#define BLYNK_TEMPLATE_NAME "Smart Home AI"
#define BLYNK_AUTH_TOKEN "QQ95G8WwBV9ZbgzXWYzarOD4oVYTVcfI"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <DHT.h>

char ssid[] = "OppoA16";
char pass[] = "000YA000";

// Pin configuration
#define DHTPIN D2
#define DHTTYPE DHT11

#define FLAME_PIN D5
#define BUZZER_PIN D6
#define LED_PIN D7

// Confirm your sensor's output polarity
#define FLAME_ACTIVE LOW

DHT dht(DHTPIN, DHTTYPE);
BlynkTimer timer;

int ledState = 0;

void sendSensorData()
{
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  int flameReading = digitalRead(FLAME_PIN);

  int flameDetected =
      (flameReading == FLAME_ACTIVE) ? 1 : 0;

  // Risk level
  // 0 = Safe, 1 = Warning, 2 = Danger

  int riskLevel = 0;

  if (flameDetected == 1)
  {
    riskLevel = 2;
  }
  else if (!isnan(temperature) && temperature >= 40)
  {
    riskLevel = 1;
  }

  bool alarm = (riskLevel == 2);

  digitalWrite(BUZZER_PIN, alarm ? HIGH : LOW);

  // Send temperature and humidity
  if (!isnan(temperature))
  {
    Blynk.virtualWrite(V0, temperature);
  }

  if (!isnan(humidity))
  {
    Blynk.virtualWrite(V1, humidity);
  }

  // Send flame, buzzer and risk status
  Blynk.virtualWrite(V3, flameDetected);
  Blynk.virtualWrite(V4, alarm ? 1 : 0);
  Blynk.virtualWrite(V6, riskLevel);

  // Serial Monitor
  Serial.println("--------------------");

  Serial.print("Temperature: ");
  Serial.println(temperature);

  Serial.print("Humidity: ");
  Serial.println(humidity);

  Serial.print("Flame: ");
  Serial.println(flameDetected);

  Serial.print("Risk Level: ");
  Serial.println(riskLevel);
}

// Blynk LED control
BLYNK_WRITE(V5)
{
  ledState = param.asInt();
  digitalWrite(LED_PIN, ledState ? HIGH : LOW);
}

BLYNK_CONNECTED()
{
  Blynk.syncVirtual(V5);
}

void setup()
{
  Serial.begin(115200);

  pinMode(FLAME_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);

  digitalWrite(BUZZER_PIN, LOW);
  digitalWrite(LED_PIN, LOW);

  dht.begin();

  Serial.println("Smart Home AI Starting...");

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  Serial.println("Blynk Connected!");

  timer.setInterval(2000L, sendSensorData);
}

void loop()
{
  Blynk.run();
  timer.run();
}
