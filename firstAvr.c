#include <avr/interrupt.h>
#define PORTB *((volatile unsigned char*) 0x25)
#define DDRB *((volatile unsigned char*) 0x24)
#define TCR1B *((volatile unsigned char*) 0x81)
#define OC1AH *((volatile unsigned char*) 0x89)
#define OC1AL *((volatile unsigned char*) 0x88)
#define TCIM *((volatile unsigned char*) 0x6F)
#define WGM12 3
#define CS12 2
#define CS10 0
#define OC1A 1

int
main (void){
	//Setup clock
	TCR1B |= ((1 << CS12) | (1 << CS10));//Set prescaler of 1024
	TCR1B |= (1 << WGM12);//Set CTC mode
	OC1AH = 0b00111101;//Set 15624 half
	OC1AL = 0b00001000;//Set 15624 half
	TCIM |= (1 << OC1A);//Enable timer interrupt
	sei ();//enable global interrupts

	//Setup I/O for led
	DDRB |= (1 << 5);//Set D13 as output
	PORTB |= (1 << 5);//D13 HIGH
	while (1){}
	return 0;
}

ISR (TIMER1_COMPA_vect){
	//When 1 sec pass toggle D13 state
	PORTB ^= (1 << 5);
}
