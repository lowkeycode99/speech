COMPANY NAME: CODTECH IT SOLUTIONS INTERN ID: CT06DG486 DOMAIN: EMBEDDED SYSTEMS DURATION: 6 WEEKS MWNTOR: NEELA SANTOSH
This project is a **Speech Recognition-Based Home Appliance Control System**, designed and simulated using Wokwi, an online simulator for Arduino and ESP32-based projects. The main goal of this project is to demonstrate how we can control different electrical appliances using speech commands, introducing the concept of smart, voice-controlled living spaces.
# Overview
In real-world implementations, a speech recognition module (for example, Elechouse Voice Recognition Module) listens to spoken commands such as "Heater ON" or "Coffee Machine OFF". It then converts these commands into specific serial signals, which are received and interpreted by a microcontroller (like ESP32) to control various appliances.
**However, since Wokwi does not support actual voice modules or real-time audio input, we strictly use the Serial Monitor to type commands manually in order to simulate the behavior of a voice recognition system.** This approach allows us to understand the core logic of a speech-controlled system even without a physical voice module.

In this project, three appliances are controlled:
-  Heater
-  Coffee Machine
-  Table Lamp

Each appliance is represented by an LED in the simulation for easy visualization. When a specific character is received from the Serial Monitor, the ESP32 controls the GPIO pin to turn the corresponding device ON or OFF.
# Simulation Platform
This project is built and tested on **Wokwi**, an advanced and beginner-friendly online simulator for embedded systems. Wokwi allows users to design circuits, write code, and run simulations in the browser without needing any physical hardware.

# Applications
- Home automation for smart living.
-  Touch-free control for elderly or differently-abled individuals.
-  Office and kitchen automation, like remotely controlling coffee machines or heaters.
-  Energy conservation by enabling easy switching OFF of appliances when not needed.
-  Foundation for future integration with actual voice assistants (Alexa, Google Assistant).

# Educational Importance
- Serial communication (UART) concepts.
- GPIO pin handling and control logic.
- Basic structure of a command-based automation system.
- Simulation-based testing when real modules are unavailable.

# Possible Extensions
- Add real speech recognition modules on actual hardware setups.
- Replace LEDs with relays to control real electrical appliances.
- Integrate Wi-Fi or Bluetooth modules for remote mobile app control.
- Display appliance status on an LCD or OLED screen.
- Include sensors (motion, temperature) to automate appliances based on environmental conditions.

# How it works
- **Important:** Since Wokwi does not support actual voice modules, we strictly type commands manually in the Serial Monitor to simulate voice commands.
- ESP32 reads each character command from the Serial Monitor and toggles GPIO pins accordingly.
- LEDs represent different appliances in the simulation to show ON/OFF states.
- Example commands:
  - `H` → Heater ON, `h` → Heater OFF
  - `C` → Coffee Machine ON, `c` → Coffee Machine OFF
  - `T` → Table Lamp ON, `t` → Table Lamp OFF

# Output
![Image](https://github.com/user-attachments/assets/baf7fabb-4f41-4a64-a992-9ea44ce26572)

