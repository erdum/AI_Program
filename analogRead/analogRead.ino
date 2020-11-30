int potPin = A0;
int led = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(potPin, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(potPin);
  int dur = map(value, 0, 1024, 0, 1000);
  digitalWrite(led, HIGH);
  delay(dur);
  digitalWrite(led, LOW);
  delay(dur);
}
