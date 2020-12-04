const int potPin = A0;
const int ledPin = 13;
int duration;
void setup(){
    pinMode(potPin, INPUT);
    pinMode(ledPin, OUTPUT);
}
void loop(){
    duration = analogRead(potPin);
    // Here i am mapping 1024 analog value to 1000 milliseconds 
    maped_value = (1000 / 1024) * duration;
    digitalWrite(ledPin, HIGH);
    delay(duration);
    digitalWrite(ledPin, LOW);
    delay(duration);
}