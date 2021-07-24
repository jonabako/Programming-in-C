#include <stdio.h>
int main(){
	double a, b;
	scanf("%lf", &a);
	scanf("%lf", &b);
	printf("sum of doubles=%lf\n", a+b);
	printf("difference of doubles=%lf\n", a-b);
	printf("square=%lf\n", a*a);
	int c, d;
	scanf("%d", &c);
	scanf("%d", &d);
	printf("sum of integers=%d\n", c+d);
	printf("product of integers=%d\n", c*d);
	char e, f;
	getchar();
	scanf("%c", &e);
	getchar();
	scanf("%c", &f);
	printf("sum of chars=%d\n", e+f);
	printf("product of chars=%d\n", e*f);
	printf("sum of chars=%c\n", e+f);
	printf("product of chars=%c\n", e*f);
	return 0;
}
