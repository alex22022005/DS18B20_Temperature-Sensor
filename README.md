# 🌡️ DS18B20 Digital Temperature Sensor with Arduino/ESP8266

A simple project using the **DS18B20 digital temperature sensor** to measure temperature in **Celsius and Fahrenheit**.  
The project demonstrates how to use the **OneWire** and **DallasTemperature** libraries to interface with the sensor and display readings via the Serial Monitor.

---

## 📌 Features
- 📏 Accurate **temperature measurement** using DS18B20.  
- 📡 Supports **Celsius & Fahrenheit** readings.  
- 🛑 Includes error detection if the sensor is disconnected.  
- ⏳ Updates readings every 1 second.  

---

## 🛠 Components Used
| Component              | Quantity |
|------------------------|----------|
| Arduino UNO / ESP8266  | 1        |
| DS18B20 Sensor (Waterproof/Non-waterproof) | 1 |
| 4.7kΩ Resistor (Pull-up) | 1        |
| Jumper Wires           | As needed |
| Breadboard             | 1        |

---

## 🔌 Circuit Diagram
- **DS18B20 Data Pin** → D2 (GPIO2 if ESP8266).  
- **VCC** → +5V (or 3.3V for ESP8266).  
- **GND** → GND.  
- **4.7kΩ Pull-up Resistor** between **Data pin** and **VCC**.  

---

## 📜 Arduino Code
The code initializes the DS18B20 sensor, reads the temperature, and prints the values to the Serial Monitor.  
- Prints both °C and °F.  
- Handles disconnected sensor errors.  

The full Arduino code is available in [`smart_agriculture.ino`](https://github.com/alex22022005/DS18B20_Temperature-Sensor/blob/main/Temperature_sensor_DS18B20_nowaterproof.ino).

---

## 🚀 How to Run
1. Install **Arduino IDE**.  
2. Install required libraries from **Library Manager**:  
   - `OneWire`  
   - `DallasTemperature`  
3. Connect the DS18B20 to your Arduino/ESP8266 as per the circuit.  
4. Upload the code to your board.  
5. Open **Serial Monitor** at **9600 baud** to see real-time readings.  

---

## 📲 Applications
- 🌱 Soil temperature monitoring (with waterproof sensor).  
- 🌡️ Room and body temperature monitoring.  
- 🏭 Industrial temperature sensing.  
- 📦 Cold chain management.  

---

## 📄 License
This project is licensed under the **MIT License** – free to use, modify, and distribute.  

---

## ✨ Author
Developed by **Antony Alex**  
🌐 GitHub: [alex22022005](https://github.com/alex22022005)  
🚀 IoT | Embedded Systems | Smart Automation  

---
