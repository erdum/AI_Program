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
    int mapped_value = (1000 / 1024) * duration;
    // we can also use map function here mapped_value = map(duration, 0, 1024, 0, 1000);
    digitalWrite(ledPin, HIGH);
    delay(mapped_value);
    digitalWrite(ledPin, LOW);
    delay(mapped_value);
}
