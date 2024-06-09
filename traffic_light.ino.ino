// C++ code
//
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{ // Acende LED Verde
  digitalWrite(11, HIGH);
  delay(5000); // Wait for 1000 millisecond(s)
  digitalWrite(11, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  // Acende LED Amarelo
  digitalWrite(12, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(12, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  //Acende LED Vermelho
  digitalWrite(13, HIGH);
  delay(5000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}