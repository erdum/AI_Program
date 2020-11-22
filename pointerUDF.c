#include <stdio.h>
int test(int *x);
int main(){
	int *y;
	int z = 22;
	y = &z;
	test(y);
}
int test(int *x){
	printf("the address of input is %d\n", x);
	printf("the value of input is %d\n", *x);
}
