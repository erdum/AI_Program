#include <stdio.h>
#include <string.h>

struct Students {
	char name[22];
	int age;
};

struct School {
	struct Students student;
	int class;
	char name[22];
};

int main(){
	struct School
		school1;
	strcpy(school1.name, "Beacon house");
	school1.class = 10;
	school1.student.age = 16;
}
