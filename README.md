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
2. Open the project in VS Code with PlatformIO installed.
3. Connect your ESP32 board to your computer via USB.
4. Build and upload the firmware:

   ```bash
   pio run --target upload
   pio device monitor

 - Ensure the baud rate is set to 115200.

## ▶️ Expected Output
When running, you should see logs similar to:

DHT Sensor Reading Example
Temperature: 25.4 °C  |  Humidity: 60.1 %
