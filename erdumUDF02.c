float add(int x, float y);
int main(){
	float result;
	int a = 2;
	float b = 2.144444;
	result = add(a,b);
	printf("%f", result);
}
float add(int x, float y){
	return x + y;
}
