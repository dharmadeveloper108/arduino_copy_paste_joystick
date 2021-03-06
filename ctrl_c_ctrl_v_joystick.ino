
#include "Keyboard.h"

int VRx = A0;
int VRy = A1;
int SW = 2;

  
int xPosition = 0;
int yPosition = 0;
int SW_state = 0;
int mapX = 0;
int mapY = 0;

// use this option for OSX:
char ctrlKey = KEY_LEFT_GUI;
// use this option for Windows and Linux:
//  char ctrlKey = KEY_LEFT_CTRL;

void setup() {
  Serial.begin(9600);

  pinMode(VRx, INPUT);
  pinMode(VRy, INPUT);
  pinMode(SW, INPUT_PULLUP);
}

void loop() {

  xPosition = analogRead(VRx);
  yPosition = analogRead(VRy);
  SW_state = digitalRead(SW);
  mapX = map(xPosition, 0, 1023, -512, 512);
  mapY =  map(yPosition, 0, 1023, -512, 512);

  Serial.print("Y: ");
  Serial.print(mapY);

  switch(mapY) {
    case -512:
    Serial.print("UP => copy");
    Keyboard.press(ctrlKey);
    Keyboard.press('c');
    delay(100);
    Keyboard.releaseAll();
    break;
    case 512:
    Serial.print("DOWN => paste");
    Keyboard.press(ctrlKey);
    Keyboard.press('v');
    delay(100);
    Keyboard.releaseAll();
    break;
  }

  delay(100);

}
