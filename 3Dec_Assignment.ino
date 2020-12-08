const int pinA = 13;
const int pinB = 12;
const int pinC = 11;
const int pinD = 10;
const int pinE = 9;
const int pinF = 8;
const int pinG = 7;
const int btn = 2;
int lastTime = 0;
int duration = 0;
int count = 0;
bool state = false;
void dts(int input){
    if(input == 0){
        digitalWrite(pinA, HIGH);
        digitalWrite(pinB, HIGH);
        digitalWrite(pinC, HIGH);
        digitalWrite(pinD, HIGH);
        digitalWrite(pinE, HIGH);
        digitalWrite(pinF, HIGH);
        digitalWrite(pinG, LOW);
    }
    else if(input == 1){
        digitalWrite(pinA, LOW);
        digitalWrite(pinB, HIGH);
        digitalWrite(pinC, HIGH);
        digitalWrite(pinD, LOW);
        digitalWrite(pinE, LOW);
        digitalWrite(pinF, LOW);
        digitalWrite(pinG, LOW);
    }
    else if(input == 2){
        digitalWrite(pinA, HIGH);
        digitalWrite(pinB, HIGH);
        digitalWrite(pinC, LOW);
        digitalWrite(pinD, HIGH);
        digitalWrite(pinE, HIGH);
        digitalWrite(pinF, LOW);
        digitalWrite(pinG, HIGH);
    }
    else if(input == 3){
        digitalWrite(pinA, HIGH);
        digitalWrite(pinB, HIGH);
        digitalWrite(pinC, HIGH);
        digitalWrite(pinD, HIGH);
        digitalWrite(pinE, LOW);
        digitalWrite(pinF, LOW);
        digitalWrite(pinG, LOW);
    }
    else if(input == 4){
       digitalWrite(pinA, LOW); 
       digitalWrite(pinB, HIGH); 
       digitalWrite(pinC, HIGH); 
       digitalWrite(pinD, LOW); 
       digitalWrite(pinE, LOW); 
       digitalWrite(pinF, HIGH); 
       digitalWrite(pinG, HIGH); 
    }
    else if(input == 5){
        digitalWrite(pinA, HIGH);
        digitalWrite(pinB, LOW);
        digitalWrite(pinC, HIGH);
        digitalWrite(pinD, HIGH);
        digitalWrite(pinE, LOW);
        digitalWrite(pinF, HIGH);
        digitalWrite(pinG, HIGH);
    }
    else if(input == 6){
        digitalWrite(pinA, HIGH);
        digitalWrite(pinB, LOW);
        digitalWrite(pinC, HIGH);
        digitalWrite(pinD, HIGH);
        digitalWrite(pinE, HIGH);
        digitalWrite(pinF, HIGH);
        digitalWrite(pinG, HIGH);
    }
    else if(input == 7){
        digitalWrite(pinA, HIGH);
        digitalWrite(pinB, HIGH);
        digitalWrite(pinC, HIGH);
        digitalWrite(pinD, LOW);
        digitalWrite(pinE, LOW);
        digitalWrite(pinF, LOW);
        digitalWrite(pinG, LOW);
    }
    else if(input == 8){
        digitalWrite(pinA, HIGH);
        digitalWrite(pinB, HIGH);
        digitalWrite(pinC, HIGH);
        digitalWrite(pinD, HIGH);
        digitalWrite(pinE, HIGH);
        digitalWrite(pinF, HIGH);
        digitalWrite(pinG, HIGH);
    }
    else if(input == 9){
        digitalWrite(pinA, HIGH);
        digitalWrite(pinB, HIGH);
        digitalWrite(pinC, HIGH);
        digitalWrite(pinD, LOW);
        digitalWrite(pinE, LOW);
        digitalWrite(pinF, HIGH);
        digitalWrite(pinG, HIGH);
    }
}
void setup(){
   pinMode(pinA, OUTPUT); 
   pinMode(pinB, OUTPUT); 
   pinMode(pinC, OUTPUT); 
   pinMode(pinD, OUTPUT);
   pinMode(pinE, OUTPUT);
   pinMode(pinF, OUTPUT);
   pinMode(pinG, OUTPUT);
   pinMode(btn, INPUT_PULLUP);
}
void loop(){
    bool btnState = digitalRead(btn);
    if((millis() - lastTime) > 50){
        while(btnState == false){
            delay(100);
            duration = duration + 100;
            buttonState = digitalRead(btn);
        }
        if(duration >= 100){
            if(count == 9 && state == false){
                state = true;
            }
            else if(count == 0 && state == true){
                state = false;
            }
            if(state){
                count = count - 1;
                lastTime = millis();
            }
            else{
                count = count + 1;
                lastTime = millis();
            }
        }
        duration = 0;
    }
    dts(count);
   
}
