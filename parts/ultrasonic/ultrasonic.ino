uint8_t trigPin = A2, echoPin = A3;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float distance = getDistance();
  Serial.println(distance);
  // Wait a little bit of time between measurements
  delay(2000);
}

float getDistance() {
  // Send a pulse on the "trigger" pin as specified on the HC-SR04 datasheet
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);  
  digitalWrite(trigPin, LOW);
  float distance = pulseIn(echoPin, HIGH, 5000);
  // Scale the distance from "echo" pulse duration to centimeters as specified on the HC-SR04 datasheet
  distance = distance / 5.8 / 10;
  return distance;
}
