# Happy Planting Device 🌱 

A fun and practical Arduino project—a moisture-detecting plant buddy that says 'Sungyoung's Plant1 needs water💧' and lights up💡 when it’s thirsty. When you give the plant water, it plays happy sounds (music)🎵! 
Perfect for learning embedded systems, sensors, and hardware-software integration.

## 💡 Features
- Capacitive moisture sensor input
- Moisture level mapped to LED brightness
- DFMini MP3 module with custom audio playback
- Custom 3D printed or laser-cut housing
- Expandable to support WiFi, Discord alerts, or real-time clock triggers

## 🧰 Tech Stack
- Arduino Nano(Microcontroller) <br> <img src="https://github.com/user-attachments/assets/d59336ca-3c30-45ee-92ec-0e444c47e971" width="100">

- Capacitive Moisture Sensor <br> <img src="https://github.com/user-attachments/assets/48d6691e-e47d-44f9-bb34-56acce80e356" width="100">

- DFPlayer Mini MP3 <br> <img src="https://github.com/user-attachments/assets/4b49f59b-2cb0-4a6b-b565-cb91c0baf0dd" width="80">

- Programming Language: C/C++ 
- Arduino IDE
- Libraries:	DFRobotDFPlayerMini, SoftwareSerial
- Half Breadboard, Mini Breadboard, 3 Pin Switch, Button, Resistors, LED, 3W Speaker, 4xAAA Battery pack with AAA Batteries
- Wires, USB A to USB B cable, Lever Wire Connectors
- MicroSD Card for sound storage
- Hardware Design: 	3D printed and laser-cut box 

## 📸 Demo (Insert Video or GIF)
![Demo](link-to-demo.gif)

## 🛠️ How to Use
1. Connect components as shown in schematic (coming soon)
2. Upload the code from `/code` folder to Arduino using Arduino IDE
3. Format SD card with `/mp3/0001.mp3`, `0002.mp3`, `0003.mp3`
4. Insert into MP3 module and power the board
5. Enjoy your screaming plant!

## 🎯 Learning Outcomes
- Analog sensor reading and interpretation
- Breadboarding + voltage divider setup
- Serial communication (RX/TX) with external modules
- Modular, scalable hardware design

## 📦 Folder Structure
