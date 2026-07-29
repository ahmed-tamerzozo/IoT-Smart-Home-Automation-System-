# 🏠 IoT Smart Home Automation System (ESP32 / MQTT)

An end-to-end IoT home automation nodes architecture built on the ESP32, utilizing MQTT protocol for low-latency, real-time telemetry data transmission and remote appliance control.

---

## 🛠️ Hardware & Protocols
- Microcontroller: ESP32 Wi-Fi/BLE Dual-Core SoC
- Communication Protocol: MQTT over TCP/IP, HTTP REST APIs
- Actuators & Sensors: Multi-Channel Relay Module, DHT22 Temperature/Humidity Sensor, Light Dependent Resistor (LDR)

---

## 🚀 Key Features
- Real-Time Telemetry: Continuous sensor state reporting via lightweight MQTT topics.
- Remote Actuation: Secure command execution for home loads and lighting systems.
- Fail-Safe Connectivity: Auto-reconnect handling for network drops.

---

## 📂 Project Structure
```text
├── src/
│   └── main.cpp    # Wi-Fi stack, MQTT client, and GPIO drivers
└── README.md       # Project documentation
👤 Author
 Ahmed Tamer -[ LinkedIn Profile](https://linkedin.com/in/ahmed-tamer-eng)
