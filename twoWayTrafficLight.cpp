const int red1 = 13;
const int yellow1 = 12;
const int green1 = 11;
const int red2 = 10;
const int yellow2 = 9;
const int green2 = 8;
const int duration = 500;
void setup() {
   pinMode(red1 ,OUTPUT); 
   pinMode(yellow1 ,OUTPUT); 
   pinMode(green1 ,OUTPUT); 
   pinMode(red2 ,OUTPUT); 
   pinMode(yellow2 ,OUTPUT); 
   pinMode(green2 ,OUTPUT); 
}
void loop() {
    digitalWrite(red1, HIGH);
    digitalWrite(green2, HIGH);
    delay(duration + duration);
    digitalWrite(red1, LOW);
    digitalWrite(green2, LOW);
    digitalWrite(yellow1, HIGH);
    digitalWrite(yellow2, HIGH);
    delay(duration);
    digitalWrite(yellow1, LOW);
    digitalWrite(yellow2, LOW);
    digitalWrite(red2, HIGH);
    digitalWrite(green1, HIGH);
    delay(duration + duration);
}