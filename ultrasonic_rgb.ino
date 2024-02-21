int trigPin= 13;
int echoPin= 12;
int redPin= 5;
int bluePin=6;
int greenPin=7;


void setup() {
  Serial.begin (9600);

pinMode(trigPin, OUTPUT);

pinMode(echoPin, INPUT);

pinMode(redPin, OUTPUT);
pinMode(bluePin, OUTPUT);
pinMode(greenPin, OUTPUT);

}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);

delayMicroseconds(2);

digitalWrite(trigPin, HIGH);

delayMicroseconds(10);

digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

distance = (duration/2) / 29.1;
if (distance < 5) 
{
  digitalWrite(redPin, HIGH);
  digitalWrite(redPin, LOW);
}
else if (distance <= 10)
{
  digitalWrite(bluePin, HIGH);
  digitalWrite(bluePin, LOW);
}
else
{
  digitalWrite(greenPin, HIGH);
  digitalWrite(greenPin, LOW);
}


Serial.print(distance);
Serial.println(" cm");
}
