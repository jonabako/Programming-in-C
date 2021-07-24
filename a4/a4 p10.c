#include <stdio.h>
#include <math.h>
void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb);
int main(){
	float a, b, pr, d, po, i;
	scanf("%f", &a);
	scanf("%f", &b);
	proddivpowinv(a, b, &pr, &d, &po, &i);
	printf("Value of a: %f\n", a);
	printf("Value of b: %f\n", b);
	printf("Product of a and b: %f\n", pr);
	printf("Division of a and b: %f\n", d);
	printf("Value of a to the power of b: %f\n", po);
	printf("Value of the inverse of b: %f\n", i);
	return 0;
}
void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb){
	*prod = a*b;
	*div = a/b;
	*pwr = pow(a, b);
	*invb = 1.0/b;
}
