
# ESP32 DHT22 Sensor Reading Example

This project demonstrates how to read **temperature** and **humidity** values from a DHT sensor (DHT22 or DHT11) using an **ESP32** and print the readings to the serial monitor every minute.

---

## Features

* Reads temperature (°C) and humidity (%) from DHT11/DHT22.
* Non-blocking timer logic using `millis()` for efficient loop operation.
* Prints readings to the serial monitor every 60 seconds.
* Error handling for failed sensor readings.

---

## Hardware Requirements

* **ESP32 Development Board**
* **DHT11 or DHT22 sensor**
* Jumper wires
* Breadboard (optional)

### Pin Connections (Default)

* **DHT Data Pin → GPIO4** (can be changed in code)
* **VCC → 3.3V** (preferred for ESP32, but 5V also works depending on sensor)
* **GND → GND**

---

## Software Requirements

* [PlatformIO](https://platformio.org/) 
* ESP32 board support installed
* Required Libraries:

  * [DHT sensor library](https://github.com/adafruit/DHT-sensor-library)
  * [Adafruit Unified Sensor](https://github.com/adafruit/Adafruit_Sensor)

These are already listed in `platformio.ini` for PlatformIO users.

---

## Installation & Setup

1. Clone this repository or copy the code.
2. Open the project in **PlatformIO** or **Arduino IDE**.
3. Connect your ESP32 via USB.
4. Upload the code.
5. Open **Serial Monitor** at `115200` baud to view readings.

---

## Configuration

* **Sensor Type**:

  ```cpp
  #define DHTTYPE DHT22   // Change to DHT11 if using DHT11
  ```
* **Data Pin**:

  ```cpp
  #define DHTPIN 4   // Change if your sensor is wired to another GPIO
  ```
* **Update Interval**:

  ```cpp
  const long interval = 60000; // default 1 minute
  ```

---

## Example Output

```
DHT Sensor Reading Example
Temperature: 25.4 °C  |  Humidity: 60.2 %
Temperature: 25.5 °C  |  Humidity: 60.4 %
```

---

## Troubleshooting

* If you see **"Failed to read from DHT sensor!"**:

  * Check wiring (especially data pin and pull-up resistor if required).
  * Ensure the correct sensor type (`DHT11` or `DHT22`) is defined.
  * Try a different GPIO pin if ESP32 has restrictions.

---

## License

This project is open-source and free to use under the MIT License.

