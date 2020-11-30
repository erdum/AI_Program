const int btn = 2;
const int led1 = 12;
const int led2 = 11;
const int led3 = 10;
const int indication = 9;
float pressLength_time = 0;
const int toggle_time = 100;
const int option_time = 1000;
int lastTime = 0;
const int debounce = 50;
bool led1State = false;
bool led2State = false;
bool led3State = false;
int option = 1;
bool currentState;
void setup() {
    pinMode(btn, INPUT_PULLUP);
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(indication, OUTPUT);
    Serial.begin(9600);
}
void loop() {
    if((millis() - lastTime) > debounce){
        while(digitalRead(btn) == false){
            delay(100);
            pressLength_time = pressLength_time + 100;
            Serial.print("ms = ");
            Serial.println(pressLength_time);
        }
        if(pressLength_time >= option_time){
            if(option == 3){
                option = 1;
            }
            else{
                option = option + 1;
            }
            digitalWrite(indication, HIGH);
            delay(250);
            digitalWrite(indication, LOW);
            lastTime = millis();
        }
        else if(pressLength_time >= toggle_time){
            if(option == 1){
                if(led1State == false){
                    led1State = true;
                    Serial.println("led1 on");
                }
                else{
                    led1State = false;
                    Serial.println("led1 off");
                }
            }
            else if(option == 2){
                if(led2State == false){
                    led2State = true;
                    Serial.println("led2 on");
                }
                else{
                    led2State = false;
                    Serial.println("led2 off");
                }
            }
            else{
                if(led3State == false){
                    led3State = true;
                    Serial.println("led3 on");
                }
                else{
                    led3State = false;
                    Serial.println("led3 off");
                }
            }
            lastTime = millis();
        }
        pressLength_time = 0;
    }
    digitalWrite(led1, led1State);
    digitalWrite(led2, led2State);
    digitalWrite(led3, led3State);
}
