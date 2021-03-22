

void setup() {


  pinMode(led1, OUTPUT);

}

void loop() {
  // E
  digitalWrite(led1, HIGH);
  delay(500);
  
  digitalWrite(led1, LOW);
  delay(1500);

  // M
  digitalWrite(led1, HIGH);
  delay(1500);
  digitalWrite(led1, LOW);
  delay(500);
  digitalWrite(led1, HIGH);
  delay(1500);
  
  digitalWrite(led1, LOW);
  delay(1500);

  // A
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  delay(500);
  digitalWrite(led1, HIGH);
  delay(1500);
  
  digitalWrite(led1, LOW);
  delay(1500);

  // D
  digitalWrite(led1, HIGH);
  delay(1500);
  digitalWrite(led1, LOW);
  delay(500);
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  delay(500);
  digitalWrite(led1, HIGH);
  delay(500);
  
  digitalWrite(led1, LOW);
  delay(3500);
}

