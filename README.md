# Happy Planting Device 🌱 

A fun and practical Arduino project—a moisture-detecting plant buddy that says ' Sungyoung's Plant1 needs water!💧' and lights up💡 when it’s thirsty. When you give the plant water🚿, it plays happy sounds (music)🎵! 
Perfect for learning embedded systems, sensors, and hardware-software integration.


## Overview
The Happy Planting device is equipped with a moisture sensor and a customizable MP3 player, allowing your household plants to play a unique sound whenever they need water. This playful feature helps users track soil moisture levels and water their plants more reliably and intuitively.

## Integration
This project was developed using Arduino C and C++ for embedded systems. The codebase primarily utilizes C++, enhanced by Arduino-specific methods and libraries for handling sensors, serial communication, and audio playback. The combination of hardware and software showcases hands-on hardware-software integration and real-time sensor interaction.

- Programming Language: C/C++ 
- Arduino IDE
- Libraries:	DFRobotDFPlayerMini, SoftwareSerial

## Features
- Capacitive moisture sensor input
- Moisture level mapped to LED brightness
- DFMini MP3 module with custom audio playback
- Custom 3D printed and laser-cut housing

## Electrical Components
- Arduino Nano(Microcontroller) <br> <img src="https://github.com/user-attachments/assets/d59336ca-3c30-45ee-92ec-0e444c47e971" width="100">

- Capacitive Moisture Sensor <br> <img src="https://github.com/user-attachments/assets/48d6691e-e47d-44f9-bb34-56acce80e356" width="100">

- DFPlayer Mini MP3 <br> <img src="https://github.com/user-attachments/assets/4b49f59b-2cb0-4a6b-b565-cb91c0baf0dd" width="80">

- Half Breadboard, Mini Breadboard, 3 Pin Switch, Button, Resistors, LED, 3W Speaker, 4xAAA Battery pack with AAA Batteries
- Wires, USB A to USB B cable, Lever Wire Connectors
- MicroSD Card for sound storage
- Hardware Design: 	3D printed and laser-cut box 

## Demo (Video)

[![Screaming Plant Demo 1](https://img.youtube.com/vi/l7jk6fIN6yw/0.jpg)](https://www.youtube.com/watch?v=l7jk6fIN6yw)

[![Screaming Plant Demo 2](https://img.youtube.com/vi/NJWNvNU74-s/0.jpg)](https://www.youtube.com/watch?v=NJWNvNU74-s)


## Final Product (Photo)
<br> <img src="https://github.com/user-attachments/assets/830d6402-3e91-4c7a-9c2e-d08e571ff65f" width="600">



## How to Use
1. Connect components as shown in schematic <br> <img src="https://github.com/user-attachments/assets/e23b125a-7a1f-48f1-9064-331aafa0abf9" width="300">

2. Upload the code from `/code` folder to Arduino using Arduino IDE
3. Format SD card with `/mp3/0001.mp3`, `0002.mp3`, `0003.mp3`
4. Insert into MP3 module and power the board
5. Enjoy your planting!

## Learning Outcomes
- Analog sensor reading and interpretation
- Breadboarding + voltage divider setup
- Serial communication (RX/TX) with external modules
- Modular, scalable hardware design



