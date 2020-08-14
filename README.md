# arduino_copy_paste_joystick 

🕹️ Source code of the firmware for Arduino Leonardo to use a Joystick to Copy & Paste  text.  

Joystick ⬆️: (cmd/ctrl + c)

Joystick ⬇️: (cmd/ctrl + v)

## Components used:

* Arduino Leonardo
* Joystick module

## How to use:

1. On line 16, assign the correct value to  `char ctrlKey`depending on your OS.

2. Upload the Arduino sketch to an Arduino Leonardo with a JoyStick module attached to it according to the following circuit design:

![circuit design](https://raw.githubusercontent.com/dharmadeveloper108/arduino_copy_paste_joystick/master/arduino_leonardo_joystick.png "circuit design")
