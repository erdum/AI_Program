#include <stdio.h>
#include <string.h>
struct duet{
	int x0;
	int x1;
	int x2;
	float y;
	char z;
	char zs[10];
};
int main()
{
	struct duet d1;
	d1.x0 = 55;
	d1.y = 55.55;
	d1.z = 'A';
	d1.x1 = 23;
	d1.x2 = 263;
	strcpy(d1.zs, "erdum");
	printf("%d\n", d1.x0);
	printf("%f\n", d1.y);
	printf("%c\n", d1.z);
	printf("%s\n", d1.zs);
	printf("%c\n", d1.x1);
	printf("%c\n", d1.x2);
}

