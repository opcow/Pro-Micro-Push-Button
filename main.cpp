// #include <Arduino.h>
#include <Keyboard.h> // The main library for sending keystrokes.
// #include <Joystick.h>

bool gKeyDown = false;

#define PINS 14
#define ENABLE_ANALOG1 false
int X1 = A0;
int Y1 = A1;

// Joystick_ Joystick(JOYSTICK_DEFAULT_REPORT_ID, JOYSTICK_TYPE_GAMEPAD, PINS, 0, 
//   true, true, false, false, false, false, false, false, false, false, false);

void setup()
{
  pinMode(2, INPUT);
  digitalWrite(2, HIGH);
  Keyboard.begin(); // Initialise the library.
}

// Loop around waiting for a button press on pin 2.
// When the button is pressed, go to the function triggerAutomation.
void loop() 
{
  if(digitalRead(2) == LOW && !gKeyDown)
  {
    Keyboard.press(KEY_LEFT_CTRL);    // Press and hold the left Crtl key.
    Keyboard.press(KEY_LEFT_GUI);     // Press and hold the left Windows key.
    Keyboard.press(KEY_LEFT_ALT);     // Press and hold the left Alt key.
    // Keyboard.press(KEY_UP_ARROW);
    gKeyDown = true;
  } else if(digitalRead(2) == HIGH && gKeyDown)
  {
    Keyboard.releaseAll();
    gKeyDown = false;
    //delay(200);
   }
}