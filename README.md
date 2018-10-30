# pumpkins

This project helps bring a light up, singing jack-o-lantern to life.

## You will need:
- Laptop with available USB port (Mac, Windows, or Linux)

## This kit contains:
- Adafruit FLORA
- Piezo (speaker)
- Neopixel (light)
- Wire
- Plastic pumpkin

## Assembly

<img src="https://github.com/innovaasta/pumpkins/blob/master/diagram.png" width="800px"/>

## Getting started
### Install Arduino integrated development environment
In order to program software code for your wearable, you will need to install the Arduino Integrated Development Environment (IDE) on your computer. Please install the Arduino IDE using the link appropriate for your operating system below.
- [Mac](https://www.arduino.cc/download_handler.php?f=/arduino-1.8.5-macosx.zip)
- [Windows](https://www.arduino.cc/download_handler.php?f=https://www.microsoft.com/store/apps/9nblggh4rsd8?ocid=badge)
- [Other](https://www.arduino.cc/en/Main/Software)

### Install Adafruit boards in Arduino IDE
Each of the Adafruit wearables boards needs a support package to run in the Arduino IDE. To add the support package:
1. From the Arduino IDE menu, navigate to Arduino --> Preferences (Mac) or File --> Preferences (PC)
2. Paste the following link into the additional board manager URLs field: https://adafruit.github.io/arduino-board-index/package_adafruit_index.json
3. Click OK to save
4. Click Tools --> Boards Manager
5. Search Adafruit
6. Install Adafruit AVR Boards by Adafruit

### Install Adafruit libraries in Arduino IDE
Each of the Adafruit wearables components requires a library in the Arduino IDE to function. From within the Arduino IDE:
1. From the Arduino IDE menu, Sketch --> Include Library --> Manage Libraries
2. In Library Manager, type the library name in the Filter Your Search field (you do not need to type in the words in parentheses):
- Adafruit Neopixel (lights)

### Download this repository to your computer
1. From GitHub, click clone or download, then click download .zip, and save where you can easily reference
2. The code sample is in the .ino file that can be opened in the Arduino IDE
