#include <stdio.h>
#define LSB(x)(x&1)
int main(){
	unsigned char c;
	scanf("%c", &c);
	printf("The decimal representation is: %d\n", c);
	printf("The least significant bit is: %d\n", LSB(c));
	return 0;
}
