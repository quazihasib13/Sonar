
long duration, distance;
int led = 12;
int counter, counter1;
int trigger=6;
int echo=7;
int maxDistance=50, minDistance=0;

void setup()
{
  Serial.begin (9600);
  pinMode(led, OUTPUT);

  pinMode(trigger,OUTPUT);
  pinMode(echo,INPUT);


}

void loop()
{

  digitalWrite(trigger, LOW); 
  delayMicroseconds(2); 

  digitalWrite(trigger, HIGH);
  delayMicroseconds(10); 

  //  digitalWrite(trigger, LOW);
  duration = pulseIn(echo, HIGH);

  //Calculate the distance (in cm) based on the speed of sound.
  distance = duration/58.2;

  //distance =analogRead(0);
  Serial.println(distance);  

  //if sensor on range
  if(distance<=15)
  {
    // Serial.println("Sensor On");
    // turnLed();
    counter1=0;
    counter++;
    //Serial.println(counter);

    if(counter==1)
    {
      turnOnLed();
    }

  }
  //if sensor off range
  else if(distance>15)
  {
    //Serial.println("Sensor Off");

    counter=0;

  }

  delay(100
  ); 
}

void turnOnLed()
{
  if(digitalRead(led) == HIGH)
  {
    //Serial.println("LedOn");
    digitalWrite(led, LOW); 
  }
  else if(digitalRead(led) == LOW)
  {
    // Serial.println("LedOff");
    digitalWrite(led, HIGH); 
  }
  //  delay(1000);               // wait for a second
  //  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  //  delay(1000);
}

void turnOffLed()
{
  digitalWrite(led, LOW);
}


