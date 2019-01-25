#include <Wire.h>

int b=2323;

void setup() {
  Wire.begin(8);// Slave ID #8
  Wire.onRequest(requestEvent);
}

void loop() {
}

void requestEvent() {
  Wire.write(highByte(b));
  Wire.write(lowByte(b));
  b = 2323;

  
}
