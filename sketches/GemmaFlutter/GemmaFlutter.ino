/*
  Flutter

  This example code is in the public domain.

  created 2016-03-06
  by Stacey Vetzal
 */

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(1, OUTPUT);
}

// let's declare and initialize some variables
int speed_up = 1;
int slow_down = 0;
int speed_limit = 1024;

int wait_time = 1;
int direction = slow_down;

// the loop function runs over and over again forever
void loop() {
  digitalWrite(1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(wait_time);              // wait for a second
  digitalWrite(1, LOW);    // turn the LED off by making the voltage LOW
  delay(wait_time);              // wait for a second

  if (direction == slow_down) {
    wait_time = wait_time * 2;
    if (wait_time >= speed_limit) direction = speed_up;
  } else {
    wait_time = wait_time / 2;
    if (wait_time <= 1) direction = slow_down;
  }
}
