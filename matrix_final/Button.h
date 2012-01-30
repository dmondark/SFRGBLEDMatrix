#ifndef Button_h
#define Button_h

#include <Arduino.h>
#include "pins.h"

#define BUTTON_COUNT 3

#define MODE 0
#define A 1
#define B 2

class Button {
private:
  boolean buttonState[BUTTON_COUNT];
  boolean lastButtonState[BUTTON_COUNT];
  unsigned long lastDebounceTime[BUTTON_COUNT];
public:
  Button();
  // to be called in loop to update button status
  void update();
  // get the status of a button
  boolean state(byte button);
};

#endif





