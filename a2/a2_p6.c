#include <stdio.h>
int main(){
	double x, y;
	scanf("%lf", &x);
	scanf("%lf", &y);
	double *ptr_one = &x;
	double *ptr_two = &x;
	double *ptr_three = &y;
	printf("Memory address contained in ptr_one:%p\n", ptr_one);
	printf("Memory address contained in ptr_two:%p\n", ptr_two);
	printf("Memory address contained in ptr_three:%p\n", ptr_three);
	return 0;
}
