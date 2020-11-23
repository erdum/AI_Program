#include <stdio.h>
#include <string.h>
struct Students {
	char name[22];
	int age;
	int class;
};

struct Schools {
	char name[22];
	struct Students student;
};

int main(){
	struct Schools 
		school1;
	strcpy(school1.name, "Beacon house");
	strcpy(school1.student.name, "Erdum");
	school1.student.age = 16;
	school1.student.class = 11;
	printf("I pass out from %s school\nMy name is %s\nI am %d years old\nI am in %dth standerd\n", school1.name, school1.student.name, school1.student.age, school1.student.class);
}
