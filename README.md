# ESP32-WROOM DHT Sensor Firmware

## 📌 Project Overview
This project demonstrates how to integrate a **DHT11/DHT22 temperature and humidity sensor** with the **ESP32-WROOM module** using **PlatformIO (Arduino framework)**.  

The firmware reads temperature and humidity values every **1 minute** and prints them to the Serial Monitor in a human-readable format.

---

## 🔧 Hardware Requirements
- ESP32-WROOM development board  
- DHT11 or DHT22 sensor  
- 10kΩ pull-up resistor (recommended for the DHT data line)  
- Jumper wires & breadboard  

---

## 🔌 Hardware Connections
| ESP32 Pin | DHT Sensor Pin |
|-----------|----------------|
| 3.3V      | VCC            |
| GND       | GND            |
| GPIO4     | DATA           |

⚠️ Note: GPIO4 is used for the DHT data line in this firmware (defined in `main.cpp`). You can change this pin assignment if needed.

---

## 🖥️ Development Environment
- [Visual Studio Code](https://code.visualstudio.com/)  
- [PlatformIO IDE](https://platformio.org/install/ide?install=vscode)  
- Arduino framework  

---

## 🚀 Setup Instructions
1. Clone this repository:
   ```bash
   git clone https://github.com/<your-username>/esp32-dht-firmware.git
   cd esp32-dht-firmware
