int i = 0;
void setup()
{
  for(i=0;i<2;i++)
  {
    pinMode(i,OUTPUT);
  }
}

void loop()
{
  for(i=0;i<2;i++)
  {
    digitalWrite(i,HIGH);
    delay(500);
    digitalWrite(i,LOW);
    delay(500);
  }
  
}