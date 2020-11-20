#include <stdio.h>
#include <string.h>
int main(){
	int i;
	char name[22];
	printf("Enter your name: ");
	gets(name);
	for(i=0;i<10;i++){
		printf("Your name is %s\n", name);
	}
}
