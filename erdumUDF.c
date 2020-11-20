#include <stdio.h>
int main(){
	int firstValue;
	int secondValue;
	int state;
	int result;
	printf("Enter any two numbers\n");
	scanf("%d %d",&firstValue,&secondValue);
	printf("Enter 1 for sum\nEnter 2 for sub\nEnter 3 for mul\n");
	scanf("%d",&state);
//	now ui part done, we have to run our UDF
	
//	now running UDF 
	result = myCalc(firstValue,secondValue,state);
	printf("%d",result);
}

// UDF defination
int myCalc(int x, int y, int s){
	if(s==1){
		return x+y;
	}
	else if(s==2){
		return x-y;
	}
	else if(s==3){
		return x*y;
	}	
}

