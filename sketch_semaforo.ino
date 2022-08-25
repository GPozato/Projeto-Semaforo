void setup()
{
  pinMode(4, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  digitalWrite(4, HIGH);
  digitalWrite(10, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(4, LOW);
  digitalWrite(9, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(8, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(3, HIGH);
  digitalWrite(2, LOW);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(3, LOW);
  digitalWrite(8, LOW);
}    
