bool state1 = false;
bool state2 = false;
bool state3 = false;
bool state4 = false;
char data;
int led1 = 12;
int led2 = 11;
int led3 = 10;
int led4 = 9;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    data = Serial.read();
    if(data == '1'){
      if(!state1){
        state1 = true;
      }
      else{
        state1 = false;
      }
    }
    else if(data == '2'){
      if(!state2){
        state2 = true;
      }
      else{
        state2 = false;
      }
    }
    else if(data == '3'){
      if(!state3){
        state3 = true;
      }
      else{
        state3 = false;
      }      
    }
    else if(data == '4'){
      if(!state4){
        state4 = true;
      }
      else{
        state4 = false;
      }
    }
    else{
      Serial.println("Invalid input");
    }
  }
  digitalWrite(led1, state1);
  digitalWrite(led2, state2);
  digitalWrite(led3, state3);
  digitalWrite(led4, state4);
}
