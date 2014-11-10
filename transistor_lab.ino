const int transistorPin = 9;

void setup() {
  pinMode(transistorPin, OUTPUT);
}

void loop() {
  //read pot
  int sensorValue = analogRead(A0);
  //map pot range to output range
  int outputValue = map(sensorValue, 0, 1023, 0, 255); 
  //control transistor with pot
  analogWrite(transistorPin, outputValue);
  //  digitalWrite(transistorPin, HIGH);
  //  delay(1000);
  //  digitalWrite(transistorPin, LOW);
  //  delay(1000);
}

