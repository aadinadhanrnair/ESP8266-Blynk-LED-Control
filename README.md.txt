# ESP8266 Blynk LED Control 💡📱

A simple IoT project using NodeMCU ESP8266 and Blynk IoT platform to control the built-in LED from a mobile phone over WiFi.

---

## 🚀 Features
- Control LED ON/OFF using Blynk app
- Real-time WiFi communication
- Simple IoT cloud integration
- Beginner-friendly ESP8266 project

---

## 🧰 Hardware Used
- NodeMCU ESP8266
- Built-in LED (GPIO2 / D4)

---

## 📱 Software Used
- Arduino IDE
- Blynk IoT App

---

## ⚙️ Working Principle
1. Mobile app sends signal via Blynk (Virtual Pin V0)  
2. ESP8266 receives the command over WiFi  
3. LED turns ON or OFF instantly  

---

## 📌 Virtual Pin Mapping
| Virtual Pin | Function     |
|-------------|-------------|
| V0          | LED Control |

---

## 📸 Project Output

### 🖼️ Output 1
![Output 1](output1.jpg)

### 🖼️ Output 2
![Output 2](output2.jpg)

---

## 🎥 Demo Video

👉 Click below to view working demo:

[Watch Demo](demo.mp4)
❌ May not play on mobile sometimes

---

## ⚡ How to Use
1. Clone this repository  
2. Create `secrets.h` file and add WiFi + Blynk credentials  
3. Upload code to NodeMCU  
4. Open Blynk app and press button (V0)  
5. LED responds instantly  

---

## 🔐 Important Note
Never upload your WiFi password or Blynk token directly in code. Use `secrets.h`.

---

## 👨‍💻 Author
Aadinadhan R Nair

---

## ⭐ Status
✔ Working Project  
✔ Tested on ESP8266 NodeMCU  