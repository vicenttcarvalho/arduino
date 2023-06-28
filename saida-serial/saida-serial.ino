// C++ code
//

void setup()
{
  Serial.begin(9600);
}

void loop(){

  for (int j=0;j<255;j++){
    Serial.println(j);
    delay(13); // Wait for 13 millisecond(s)
  }
  for (int j=255;j>0;j--){
    Serial.println(j);
    delay(13); // Wait for 13 millisecond(s)
  }

}
