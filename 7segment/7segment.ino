const int pinA = 13;
const int pinB = 12;
const int pinC = 11;
const int pinD = 10;
const int pinE = 9;
const int pinF = 8;
const int pinG = 7;
const int a = 6;
const int b = 5;
const int c = 4;
const int d = 3;
void setup(){
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
}
void loop(){
  int i;
  for(i=0;i<10;i++){
    if(i == 0){
      digitalWrite(pinA, !HIGH);
      digitalWrite(pinB, !HIGH);
      digitalWrite(pinC, !HIGH);
      digitalWrite(pinD, !HIGH);
      digitalWrite(pinE, !HIGH);
      digitalWrite(pinF, !HIGH);
      digitalWrite(pinG, !LOW);
      // for bcd
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW); 
    }
    else if(i == 1){
      digitalWrite(pinA, !LOW);
      digitalWrite(pinB, !HIGH);
      digitalWrite(pinC, !HIGH);
      digitalWrite(pinD, !LOW);
      digitalWrite(pinE, !LOW);
      digitalWrite(pinF, !LOW);
      digitalWrite(pinG, !LOW); 

      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW); 
    }
    else if(i == 2){
      digitalWrite(pinA, !HIGH);
      digitalWrite(pinB, !HIGH);
      digitalWrite(pinC, !LOW);
      digitalWrite(pinD, !HIGH);
      digitalWrite(pinE, !HIGH);
      digitalWrite(pinF, !LOW);
      digitalWrite(pinG, !HIGH);

      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW); 
    }
    else if(i == 3){
      digitalWrite(pinA, !HIGH);
      digitalWrite(pinB, !HIGH);
      digitalWrite(pinC, !HIGH);
      digitalWrite(pinD, !HIGH);
      digitalWrite(pinE, !LOW);
      digitalWrite(pinF, !LOW);
      digitalWrite(pinG, !HIGH);

      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW); 
    }
    else if(i == 4){
      digitalWrite(pinA, !LOW);
      digitalWrite(pinB, !HIGH);
      digitalWrite(pinC, !HIGH);
      digitalWrite(pinD, !LOW);
      digitalWrite(pinE, !LOW);
      digitalWrite(pinF, !HIGH);
      digitalWrite(pinG, !HIGH);

      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW); 
    }
    else if(i == 5){
      digitalWrite(pinA, !HIGH);
      digitalWrite(pinB, !LOW);
      digitalWrite(pinC, !HIGH);
      digitalWrite(pinD, !HIGH);
      digitalWrite(pinE, !LOW);
      digitalWrite(pinF, !HIGH);
      digitalWrite(pinG, !HIGH);

      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW); 
    }
    else if(i == 6){
      digitalWrite(pinA, !HIGH);
      digitalWrite(pinB, !LOW);
      digitalWrite(pinC, !HIGH);
      digitalWrite(pinD, !HIGH);
      digitalWrite(pinE, !HIGH);
      digitalWrite(pinF, !HIGH);
      digitalWrite(pinG, !HIGH);

      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW); 
    }
    else if(i == 7){
      digitalWrite(pinA, !HIGH);
      digitalWrite(pinB, !HIGH);
      digitalWrite(pinC, !HIGH);
      digitalWrite(pinD, !LOW);
      digitalWrite(pinE, !LOW);
      digitalWrite(pinF, !LOW);
      digitalWrite(pinG, !LOW);

      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW); 
    }
    else if(i == 8){
      digitalWrite(pinA, !HIGH);
      digitalWrite(pinB, !HIGH);
      digitalWrite(pinC, !HIGH);
      digitalWrite(pinD, !HIGH);
      digitalWrite(pinE, !HIGH);
      digitalWrite(pinF, !HIGH);
      digitalWrite(pinG, !HIGH);

      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH); 
    }
    else if(i == 9){
      digitalWrite(pinA, !HIGH);
      digitalWrite(pinB, !HIGH);
      digitalWrite(pinC, !HIGH);
      digitalWrite(pinD, !HIGH);
      digitalWrite(pinE, !LOW);
      digitalWrite(pinF, !HIGH);
      digitalWrite(pinG, !HIGH);

      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH); 
    }
    delay(500);
  }
}
