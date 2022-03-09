// C++ code
//
void setup()
{
 pinMode(3, OUTPUT);
 pinMode(6, OUTPUT);





}

void loop()
{
  digitalWrite(3, HIGH);
  delay(1000); 
  digitalWrite(3, LOW);
  delay(1000); 
  digitalWrite(6, HIGH);
  delay(1000); 
  digitalWrite(6, LOW);
  delay(1000); 
}