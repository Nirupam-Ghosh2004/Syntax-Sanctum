const int r=33;
int v=0;
void setup() 
{
  Serial.begin(115200);
  delay(1000);

}

void loop() 
{
  v=analogRead(r);
  Serial.println(v);
  delay(500);

}
