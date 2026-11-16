# 🏠 AI-Assisted Smart Home Monitoring and Automation System
<p align="left">
  <img src="https://img.shields.io/badge/Arduino_IDE-2.x-00979D?logo=arduino&logoColor=white" />
  <img src="https://img.shields.io/badge/Language-C++-00599C?logo=cplusplus&logoColor=white" />
  <img src="https://img.shields.io/badge/ESP8266-NodeMCU-black?logo=espressif&logoColor=white" />
  <img src="https://img.shields.io/badge/Blynk-IoT-23C48E?logo=blynk&logoColor=white" />
  <img src="https://img.shields.io/badge/Platform-WiFi-blue?logo=wifi&logoColor=white" />
</p>

An IoT-based smart home monitoring and automation project developed using **ESP8266, Blynk IoT, and environmental sensors**.

## 📌 Project Overview

This project provides real-time monitoring of environmental conditions and basic safety monitoring through an IoT-based dashboard. It uses an ESP8266 NodeMCU to collect sensor data and communicate with the Blynk IoT platform.

Users can monitor temperature, humidity and flame detection status, receive alerts through a buzzer, and remotely control an LED.

## ✨ Features

- Real-time temperature monitoring.
- Real-time humidity monitoring.
- Flame detection and safety alerts.
- Buzzer-based alert mechanism.
- Remote LED control using Blynk.
- Risk-level monitoring.
- Live temperature and humidity graphs.
- Wi-Fi-based remote monitoring.

## 🛠️ Hardware Components

| Component                           |    Quantity |
| ----------------------------------- | ----------: |
| ESP8266 NodeMCU ESP-12E             |           1 |
| DHT11 Temperature & Humidity Sensor |           1 |
| IR Flame Sensor                     |           1 |
| Buzzer                              |           1 |
| LED                                 |           1 |
| Resistors                           | As required |
| Breadboard and Jumper Wires         | As required |

## 💻 Software and Technologies

- Arduino IDE
- Embedded C/C++
- ESP8266 Wi-Fi
- Blynk IoT Platform
- DHT Sensor Library
- Blynk Library

## ⚙️ Blynk Dashboard

The project uses the following virtual pins:

| Virtual Pin | Function        |
| ----------- | --------------- |
| V0          | Temperature     |
| V1          | Humidity        |
| V3          | Flame Detection |
| V4          | Buzzer Status   |
| V5          | LED Control     |
| V6          | Risk Level      |

## 🔌 Hardware Connections

| Component    | ESP8266 Pin          |
| ------------ | -------------------- |
| DHT11 Data   | D5                   |
| Flame Sensor | Refer to source code |
| Buzzer       | Refer to source code |
| LED          | Refer to source code |

Refer to the circuit diagram included in this repository for complete wiring details.

## 🚀 Installation and Setup

1. Install Arduino IDE.
2. Install the ESP8266 board package.
3. Install the required Blynk and DHT sensor libraries.
4. Open `Smart_Home_Monitoring.ino`.
5. Configure your Wi-Fi credentials.
6. Configure your Blynk authentication token.
7. Select **NodeMCU 1.0 (ESP-12E Module)**.
8. Select the correct COM port.
9. Upload the program to the ESP8266.
10. Open your Blynk dashboard and monitor the system.

**Security:** Never publish your actual Wi-Fi password or Blynk authentication token.

## 📂 Repository Structure

```text
AI-Assisted-Smart-Home-Monitoring-System/
│
├── Smart_Home_Monitoring.ino
├── README.md
├── .gitignore
│
├── Images/
├── Circuit_Diagram/
└── Documentation/
```

## 🔮 Future Improvements

- Integration of additional environmental sensors.
- Advanced intelligent event analysis.
- Improved notification and alert mechanisms.
- Mobile application enhancements.
- Cloud-based historical data analysis.

## 👨‍💻 Project Credits

**Designed & Developed by Yash Site.**

## 📜 License

This project is available for educational and learning purposes. See the repository license for usage terms.
