#include <stdio.h>
int test();
int main(){
	int y[4];
	y = test();
//	printf("%d",y[0]);
}
int test(){
	int x[4];
	x[0] = 22;
	x[1] = 27;
	x[2] = 28;
	x[3] = 245;
	return x;
}
