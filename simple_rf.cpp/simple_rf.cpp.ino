#include <SoftwareSerial.h>

SoftwareSerial HC12(10, 11);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  HC12.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (HC12.available()) {
    Serial.write(HC12.read());
  }
  while (Serial.available()) {
    HC12.write(Serial.read());
  }
}
