#include <stdio.h>
int main(){
	float x;
	int n, i;
	scanf("%f", &x);
	scanf("%d", &n);
	while(n<1){
		printf("Input is invalid, reenter value\n");
		scanf("%d", &n);
	}
	for(i=0; i<n; i++)
		printf("%f\n", x);
	return 0;
}
