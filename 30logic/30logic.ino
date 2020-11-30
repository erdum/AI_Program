int btn1 =  2;
int btn2 = 3;
int btn3 = 4;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT);
  pinMode(btn3, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool state1 = digitalRead(btn1);
  bool state2 = digitalRead(btn2);
  bool state3 = digitalRead(btn3);
  if(state1 and !state2 and !state3){
    Serial.println("One button is pressed!");
  }
  else if(state2 and !state1 and !state3){
    Serial.println("One button is pressed!");
  }
  else if(state3 and !state1 and !state2){
    Serial.println("One button is pressed!");
  }
  else if(state1 and state2 and !state3){
    Serial.println("Two buttons are pressed!");
  }
  else if(state2 and state3 and !state1){
    Serial.println("Two buttons are pressed!");
  }
  else if(state1 and state3 and !state2){
    Serial.println("Two buttons are pressed!");
  }
  else if(state1 and state2 and state3){
    Serial.println("Three buttons are pressed!");
  }
  else{
    Serial.println("None of the buttons are pressed!");
  }
  delay(100);
}
