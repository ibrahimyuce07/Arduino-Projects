// DEFINE SENSOR AND BUZZER PINS
int const trigPin = 10;
int const echoPin = 9;
int const buzzPin = 2;

void setup()
{
	pinMode(trigPin, OUTPUT); //trig pin will have pulses output
  	pinMode(echoPin, INPUT); //echo pin should be input
  	pinMode(buzzPin, OUTPUT); // buzz pin should be output
}

void loop()
{
  int duration, distance;
  digitalWrite(trigPin, HIGH);
  delay(1);
  digitalWrite(trigPin,LOW);
  //pulse trigpin with 1 ms
  
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2 )/ 29.1;
  
  if (distance <= 50 && distance >= 0){
  digitalWrite(buzzPin,HIGH);
  }
  else {
  digitalWrite(buzzPin,LOW);
  }
  delay(50);
}