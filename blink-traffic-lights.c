int pinLedGreen = 1;
int pinLedYellow = 2;
int pinLedRed = 3;
int delayTime = 1500;

void setup()
{
  pinMode(pinLedGreen, OUTPUT);
  pinMode(pinLedYellow, OUTPUT);
  pinMode(pinLedRed, OUTPUT);

}

void loop()
{
//LUZ VERDE ON
  digitalWrite(pinLedGreen, HIGH);
  digitalWrite(pinLedYellow, LOW);
  digitalWrite(pinLedRed, LOW);

  delay(delayTime);
  
//LUZ AMARILLA ON
  digitalWrite(pinLedGreen, LOW);
  digitalWrite(pinLedYellow, HIGH);
  digitalWrite(pinLedRed, LOW);
  
  delay(delayTime);
  
//LUZ ROJA ON
  digitalWrite(pinLedGreen, LOW);
  digitalWrite(pinLedYellow, LOW);
  digitalWrite(pinLedRed, HIGH);
	
  delay(delayTime);
  
}
