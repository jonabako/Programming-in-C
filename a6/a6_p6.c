#include <stdio.h>
int main(){
	unsigned char c;
	scanf("%c", &c);
	printf("The decimal representation is: %d\n", c);
	printf("The binary representation is: ");
	int i;
	for(i=0; i<8; i++){
		if((c&128)==128)
			printf("1");
		else
			printf("0");
		c = c<<1;
	}
	printf("\n");
	return 0;
}

// alternative solution
/*
#include <stdio.h>
int main(){
    int i;
    unsigned char c;
    scanf(" %c", &c);
    printf("The decimal representation is: %d\n", c);
    printf("The binary representation is: ");
    for (i = 7; i >= 0; i--){
        printf("%d", (c & (1 << i)) > 0 ? 1 : 0);
    }
    printf("\n");
    return 0;
}
*/
