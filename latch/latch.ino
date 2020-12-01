bool state = false;
char data;
int led = 12;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    data = Serial.read();
    if(data == '1'){
      state = true;
    }
    else if(data == '2'){
      state = false;
    }
    else{
      Serial.println("Invalid input");
    }
  }
  digitalWrite(led, state);
}
