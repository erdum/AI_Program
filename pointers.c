#include <stdio.h>
int main(){
	int y;
	y = 22;
	int *x; //pointer variable initialize
	x = &y; //setting address of normal variable
	printf("The address of y %d\n", x); //printing out the address of y
	printf("The value of y %d\n", *x); //printing out the value of y
	*x = 44; //changing the value of y
	printf("The value y after changing %d", *x);//printing out the value of y now which is diffrente 
}
