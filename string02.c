#include <stdio.h>
#include <string.h>
int main(){
	int userInput;
	char name[22];
	printf("Enter 1 for your name\nEnter 2 for your father name\n%");
	scanf("%d", &userInput);
	if(userInput == 1){
		printf("Enter your name: \n");
		scanf("%s", &name);
		printf("Your name is %s", name);
	}
	else if (userInput == 2){
		printf("Enter your father name: \n");
		scanf("%s", &name);
		printf("Your father name is %s", name);	
	}
	else{
		printf("Please enter correct input!");
	}
}
