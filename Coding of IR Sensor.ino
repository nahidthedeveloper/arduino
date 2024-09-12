const int ProxSensor=2;
const int LedOutput=13;

void setup()
{
  pinMode(LedOutput, OUTPUT);
  pinMode(ProxSensor, INPUT);
  Serial.begin(9600);
}
void loop()
{
  if (digitalRead(ProxSensor)==HIGH)
  {
    digitalWrite(LedOutput, HIGH);
  }
  else 
  {
    digitalWrite(LedOutput, LOW);
  }
  delay(10);
}
