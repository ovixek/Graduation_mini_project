const int sensorPin = 2;  // IR sensor pin
const int motorPin = 8;   // Motor pin
const int buzzerPin = 9;  // Buzzer pin

long time;  // Stores time when sensor is triggered

void setup() {
  pinMode(motorPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  digitalWrite(motorPin, LOW);  // Motor ON initially
}

void loop() {
  if (!digitalRead(sensorPin)) {  // Sensor triggered (eyes closed)
    time = millis();  // Record trigger time

    while (!digitalRead(sensorPin)) {
      digitalWrite(buzzerPin, LOW);  // Buzzer OFF
      digitalWrite(motorPin, LOW);   // Motor ON
      delay(1000);
    }
  } 
  else {  // Eyes open
    if (TimeDelay() >= 3)
      digitalWrite(buzzerPin, HIGH);  // After 3s, buzzer ON

    if (TimeDelay() >= 4)
      digitalWrite(motorPin, HIGH);  // After 4s, motor OFF
  }
}

int TimeDelay() {
  long t = millis() - time; 
  return t / 1000;  // Convert to seconds
}
