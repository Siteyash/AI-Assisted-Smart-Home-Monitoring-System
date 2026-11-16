# Installation and Setup Guide

1. Install Arduino IDE.
2. Install the ESP8266 board package.
3. Install the Blynk library and the DHT sensor library required by the sketch.
4. Open `Smart_Home_Monitoring.ino`.
5. Enter your own Wi-Fi SSID/password and Blynk token locally. Never commit real credentials.
6. Select **NodeMCU 1.0 (ESP-12E Module)** and the correct COM port.
7. Verify/compile the sketch.
8. Upload it to the board.
9. Open Serial Monitor at the baud rate configured in the sketch.
10. Confirm Wi-Fi/Blynk connectivity and test each sensor and output.
11. Confirm dashboard datastreams and virtual pins match the firmware.

If credentials were ever exposed, regenerate the Blynk device token and change the Wi-Fi password where appropriate.
