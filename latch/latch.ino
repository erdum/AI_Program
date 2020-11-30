bool state = false;
int btn1 = 2;
int btn2 = 3;
int led = 12;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(btn1)){
    state = true;
  }
  if(digitalRead(btn2)){
    state = false;
  }
  digitalWrite(led, state);
}
