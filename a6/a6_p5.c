#include <stdio.h>
int main(){
	unsigned char c;
	scanf("%c", &c);
	printf("The decimal representation is: %d\n", c);
	printf("The backwards binary representation is: ");
	while(c!=0){
		printf("%d", c&1);
		c = c>>1;
	}
	printf("\n");
	return 0;
}
