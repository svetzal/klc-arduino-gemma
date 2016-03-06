/*
  Flutter

  This example code is in the public domain.

  created 2016-03-06
  by Stacey Vetzal
 */

#define PIN_ONBOARD_LED 1

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(PIN_ONBOARD_LED, OUTPUT);
}

int speed_up = 1;
int slow_down = 0;
int speed_limit = 1024;

int i = 1;
int direction = slow_down;

// the loop function runs over and over again forever
void loop() {
  digitalWrite(PIN_ONBOARD_LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(i);              // wait for a second
  digitalWrite(PIN_ONBOARD_LED, LOW);    // turn the LED off by making the voltage LOW
  delay(i);              // wait for a second

  if (direction == slow_down) {
    i = i * 2;
    if (i >= speed_limit) direction = speed_up;
  } else {
    i = i / 2;
    if (i <= 1) direction = slow_down;
  }
}
