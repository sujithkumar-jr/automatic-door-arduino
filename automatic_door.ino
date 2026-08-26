#include <Servo.h>

const int trigPin = 9;
const int echoPin = 8;

const int servoPin = 7;
const int buzzerPin = 6;

const int greenLED = 4;
const int redLED = 5;

Servo myServo;

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(buzzerPin, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);

  myServo.attach(servoPin);

  Serial.begin(9600);

  myServo.write(0);
  digitalWrite(redLED, HIGH);
  digitalWrite(greenLED, LOW);
  digitalWrite(buzzerPin, LOW);
}

void loop() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance > 0 && distance <= 15) {

    myServo.write(90);

    digitalWrite(greenLED, HIGH);
    digitalWrite(redLED, LOW);

    digitalWrite(buzzerPin, HIGH);
    delay(200);
    digitalWrite(buzzerPin, LOW);

  } else {

    myServo.write(0);

    digitalWrite(greenLED, LOW);
    digitalWrite(redLED, HIGH);

    digitalWrite(buzzerPin, LOW);
  }

  delay(200);
}
