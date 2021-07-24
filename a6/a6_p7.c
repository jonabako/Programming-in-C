#include <stdio.h>
#include <math.h>
unsigned char set3bits(unsigned char x, int a, int b, int c);
void binary(unsigned char x);
int main(){
	unsigned char x;
	int a, b, c;
	scanf("%c", &x);
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	printf("The decimal representation is: %d\n", x);
	printf("The binary representation is: ");
	binary(x);
	printf("After setting the bits: ");
	binary(set3bits(x, a, b, c));
	return 0;
}
unsigned char set3bits(unsigned char x, int a, int b, int c){
	int i;
	int A = pow(2, a);
	int B = pow(2, b);
	int C = pow(2, c);
	if((x&A)==0)
		x+=A;
	if((x&B)==0)
		x+=B;
	if((x&C)==0)
		x+=C;
	return x;
}
void binary(unsigned char x){
	int i;
	for(i=0; i<8; i++){
		if((x&128)==128)
			printf("1");
		else
			printf("0");
		x = x<<1;
	}
	printf("\n");
}
