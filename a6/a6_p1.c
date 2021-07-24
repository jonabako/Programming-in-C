#include <stdio.h>
#define SWAP(x, y, dt){dt temp = x; x = y; y = temp;}
int main(){
	int a, b;
	float c, d;
	scanf("%d%d%f%f", &a, &b, &c, &d);
	SWAP(a, b, int);
	SWAP(c, d, float);
	printf("After swapping:\n%d\n%d\n%.6f\n%.6f\n", a, b, c, d);
	return 0;
}
