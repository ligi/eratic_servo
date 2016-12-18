#include <SimpleServo.h>

SimpleServo shutter;

void setup() {
  shutter.attach(4); // connect to pin 5
}

void loop() {
  shutter.write(random(180));    //turn to position 180 degrees
  delay(1000);
}
