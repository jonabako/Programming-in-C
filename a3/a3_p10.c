#include <stdio.h>
float product(float a, float b);
void productbyref(float a, float b, float *p);
void modifybyref(float *a, float *b);
int main(){
	float a, b, p;
	scanf("%f", &a);
	scanf("%f", &b);
	printf("Product by value = %f\n", product(a, b));
	productbyref(a, b, &p);
	printf("Product by reference = %f\n", p);
	modifybyref(&a, &b);
	printf("a modified by reference = %f\n", a);
	printf("b modified by reference = %f\n", b);	
	return 0;
}
float product(float a, float b){
	return a*b;
}
void productbyref(float a, float b, float *p){
	*p = a*b;
}
void modifybyref(float *a, float *b){
	*a+=3;
	*b+=11;
}
