int inRGB[] = { A0,A1,A2 }; // Analog Inputs
int outRGB[] = { 9,10,11 }; // PWM output pins
int tempValue = 0;

const int inMinVal = 0, inMaxVal = 1023;	// Values define the maximum and minimum value returned from the potentiometer reading

void setup() {
  
  // Loop on all pins ( 3 values: Red, Green and Blue )
  for (int i = 0; i < 3; i++)
  {
    pinMode(inRGB[i], INPUT);	// read the potentiometer values
    pinMode(outRGB[i], OUTPUT);	// output  values of the LED
  }
}

void loop() {
  for (int i = 0; i < 3; i++)
  {
    tempValue = analogRead(inRGB[i]);	// Read  pot
    tempValue = map(tempValue, inMinVal, inMaxVal, 0, 255);
    analogWrite(outRGB[i], tempValue);
  }}