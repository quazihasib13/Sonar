void setup()
{ Serial.begin(9600); //Necessary to set up Serial port
}
void loop()
{ 
  Serial.print(analogRead(0));
Serial.println(' ');
//Serial.print(analogRead(1));
//Serial.print(' ');
//Serial.print(analogRead(2));
//Serial.println(' ');

delay(500); //Set the number to change frequency of readings.
}
