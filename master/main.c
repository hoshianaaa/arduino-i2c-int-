#include <Wire.h>

int cb = 0;
void setup() {
  Wire.begin();
  Serial.begin(9600);
}

void loop() {
  Wire.requestFrom(8, 2);// request 1 bytes from Slave ID #8

  while (Wire.available()) {
    byte b = Wire.read();
    byte c = Wire.read();
    
    

    cb |= b;
    cb <<= 8;
    cb |= c;

   

    Serial.println(cb);
     cb = 0;
    
    Serial.println("hello");
  }
  Serial.println("he");

  delay(500);
}

unko
