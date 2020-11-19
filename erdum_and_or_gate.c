#include <stdio.h>
int main(){
	int t1;
	int t2;
	printf("Enter input values: \n");
	scanf("%d", &t1);
	scanf("%d", &t2);
	if(t1==1 || t2==1){
		printf("your appliance is on");
	}
	else{
		printf("your appliance is off");
	}
}

