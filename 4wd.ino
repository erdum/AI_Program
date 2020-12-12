const int fl1 = 2;
const int fr1 = 3;
const int bl1 = 4;
const int br1 = 5;
const int fl2 = 6;
const int fr2 = 7;
const int bl2 = 8;
const int br2 = 9;
bool on = HIGH;
void setup(){
	pinMode(fl1, OUTPUT);
	pinMode(fr1, OUTPUT);
	pinMode(bl1, OUTPUT);
	pinMode(br1, OUTPUT);
	pinMode(fl2, OUTPUT);
	pinMode(fr2, OUTPUT);
	pinMode(bl2, OUTPUT);
	pinMode(br2, OUTPUT);
}
void loop(){
	// This code show the example of, 4 wheel drive system

	// 2 seconds forward
	digitalWrite(fl1, on);
	digitalWrite(fr1, on);
	digitalWrite(bl1, on);
	digitalWrite(br1, on);
	delay(2000);

	// 2 seconds right turn 
	digitalWrite(fl1, on);
	digitalWrite(fr2, on);
	digitalWrite(bl1, on);
	digitalWrite(br2, on);
	delay(2000);

	// 2 seconds left turn
	digitalWrite(fl2, on);
	digitalWrite(fr1, on);
	digitalWrite(bl2, on);
	digitalWrite(br1, on);
	delay(2000);

	// 2 seconds backwards 
	digitalWrite(fl2, on);
	digitalWrite(fr2, on);
	digitalWrite(bl2, on);
	digitalWrite(br2, on);
	delay(2000);
}
