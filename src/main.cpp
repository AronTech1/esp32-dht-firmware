#include <Arduino.h>
#include "DHT.h"

// Define sensor type and pin
#define DHTPIN 4         // GPIO4 used for DHT data
#define DHTTYPE DHT22    // Use DHT11 if using DHT11

DHT dht(DHTPIN, DHTTYPE);

unsigned long previousMillis = 0;
const long interval = 60000; // 1 minute = 60000 ms

void setup() {
  Serial.begin(115200);
  Serial.println("DHT Sensor Reading Example");
  dht.begin();
}

void loop() {
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    float humidity = dht.readHumidity();
    float temperature = dht.readTemperature();

    if (isnan(humidity) || isnan(temperature)) {
      Serial.println("Failed to read from DHT sensor!");
      return;
    }

    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.print(" °C  |  Humidity: ");
    Serial.print(humidity);
    Serial.println(" %");
  }
}
