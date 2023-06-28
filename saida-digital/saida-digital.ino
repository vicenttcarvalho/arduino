// C++ code
//
#define LEDdig 7

void setup()
{
  pinMode(LEDdig, OUTPUT);
}

void loop()
{
  digitalWrite(LEDdig, HIGH);
  Serial.println(1);
  delay(1000); // Wait for 1000 millisecond(s)

  digitalWrite(LEDdig, LOW);
   Serial.println(0);
  delay(1000); // Wait for 1000 millisecond(s)

}
