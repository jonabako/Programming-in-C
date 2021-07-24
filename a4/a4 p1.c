#include <stdio.h>
#include <math.h>
int main(){
	float i, lower, upper, step;
	scanf("%f", &lower);
	scanf("%f", &upper);
	scanf("%f", &step);
	for(i=lower; i<=upper; i+=step)
		printf("%f %f %f\n", i, M_PI*pow(i, 2), 2*M_PI*i);
	return 0;
}
