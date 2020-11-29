const int btn = 2;
const int led1 = 12;
const int led2 = 11;
const int led3 = 10;
const int indication = 9;
float pressLength_time = 0;
const int toggle_time = 100;
const int option_time = 1500;
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
            delay(200);
            digitalWrite(indication, LOW);
            lastTime = millis();
        }
        else if(pressLength_time >= toggle_time){
            if(option == 1){
                if(led1State == false){
                    led1State = true;
                }
                else{
                    led1State = false;
                }
            }
            else if(option == 2){
                if(led2State == false){
                    led2State = true;
                }
                else{
                    led2State = false;
                }
            }
            else{
                if(led3State == false){
                    led3State = true;
                }
                else{
                    led3State = false;
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
