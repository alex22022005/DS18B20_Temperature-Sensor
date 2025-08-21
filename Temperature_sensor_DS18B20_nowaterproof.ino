#include <OneWire.h>
#include <DallasTemperature.h>

// Data wire is connected to pin D2
#define ONE_WIRE_BUS 2

// Setup a oneWire instance to communicate with the DS18B20 module
OneWire oneWire(ONE_WIRE_BUS);

// Pass oneWire reference to DallasTemperature library
DallasTemperature sensors(&oneWire);

void setup() {
  Serial.begin(9600);
  Serial.println("DS18B20 Digital Temperature Sensor Module");

  // Start the DS18B20 sensor
  sensors.begin();
}

void loop() {
  // Request temperature measurements
  sensors.requestTemperatures();

  // Get the temperature in Celsius
  float temperatureC = sensors.getTempCByIndex(0);

  // Convert to Fahrenheit (optional)
  float temperatureF = sensors.toFahrenheit(temperatureC);

  // Print temperature readings to Serial Monitor
  if (temperatureC != DEVICE_DISCONNECTED_C) {
    Serial.print("Temperature: ");
    Serial.print(temperatureC);
    Serial.print(" °C | ");
    Serial.print(temperatureF);
    Serial.println(" °F");
  } else {
    Serial.println("Error: Sensor not connected!");
  }

  delay(1000); // Wait for 1 second before reading again
}
