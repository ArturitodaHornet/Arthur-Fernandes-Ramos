const int botao1 =2;
const int led1 =3;

int var1;

void setup()
{
  pinMode(botao1, INPUT);
  pinMode(led1, OUTPUT);
}

void loop()
{
  var1 = digitalRead(botao1);
  
  if(var1){
  digitalWrite(led1, LOW);
  }else{
  digitalWrite(led1, HIGH);
  
}
}
