#include <stdio.h>
#define MAX(a, b, c)(a>b && a>c ? a:(b>c ? b:c))
#define MIN(a, b, c)(a<b && a<c ? a:(b<c ? b:c))
#define MID(a, b, c)((MAX(a, b, c) + MIN(a, b, c))/2.0)
int main(){
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	printf("The mid-range is: %.6f", MID(a, b, c));
	return 0;
}
