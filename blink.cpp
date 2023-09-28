/*
C++ code
Created by: Youngwook Go
Created on: Sep 2023
Blinks a LED
*/

int pin5 = 5;

void setup()
{
  pinMode(pin5, OUTPUT);
}

void loop()
{
  digitalWrite(pin5, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(pin5, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
