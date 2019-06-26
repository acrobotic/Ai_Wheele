int dirPin1 = 7, dirPin2 = 8, pxrPin1 = 5, pxrPin2 = 6;

void setSpeed(int speedLeft, int speedRight) {
  if((speedLeft > 100) || (speedRight > 100)) return;
  speedLeft=55+speedLeft*2;
  speedRight=55+speedRight*2;
  analogWrite(pxrPin1, speedLeft);
  analogWrite(pxrPin2, speedRight);
}

void moveForward()  {
  digitalWrite(dirPin1, LOW);
  digitalWrite(dirPin2, LOW);
}

void moveBackward()  {
  digitalWrite(dirPin1, HIGH);
  digitalWrite(dirPin2, HIGH);
}

void moveRight()  {
  digitalWrite(dirPin1, LOW);
  digitalWrite(dirPin2, HIGH);
}

void moveLeft()  {
  digitalWrite(dirPin1, HIGH);
  digitalWrite(dirPin2, LOW);
}

void moveStop()  {
  digitalWrite(dirPin1, LOW);
  digitalWrite(dirPin2, LOW);
  analogWrite(pxrPin1, 0);
  analogWrite(pxrPin2, 0);
}

void setup() {
  pinMode(dirPin1, OUTPUT);
  pinMode(dirPin2, OUTPUT);
  pinMode(pxrPin1, OUTPUT);
  pinMode(pxrPin2, OUTPUT);
  setSpeed(100, 100);
  moveForward();
  delay(500);
  moveBackward();
  delay(500);
  moveRight();
  delay(500);
  moveLeft();
  delay(500);  
  moveStop(); 
}

void loop() {
}
