const int switchPin = 2;    // switch input
const int motor1Pin = 3;    // H-bridge leg 1 (pin 2, 1A)
const int motor2Pin = 4;    // H-bridge leg 2 (pin 7, 2A)
const int enablePin = 9;    // H-bridge enable pin

void setup() {
  pinMode(switchPin, INPUT);

  pinMode(motor1Pin, OUTPUT);
  pinMode(motor2Pin, OUTPUT);
  pinMode(enablePin, OUTPUT);
  //pinMode(ledPin, OUTPUT);

  //turn motor on with enable pin
  digitalWrite(enablePin, HIGH);
}

void loop() {
  //if switch is high, motor turns in one direction
  if (digitalRead(switchPin) == HIGH){
    digitalWrite(motor1Pin, LOW);
    digitalWrite(motor2Pin, HIGH);
  } 
  else {
    digitalWrite(motor1Pin, HIGH);
    digitalWrite(motor2Pin, LOW);
  }

}


