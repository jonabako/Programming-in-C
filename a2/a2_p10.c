#include <stdio.h>
int main(){
	int n=0;
	while(n<=0)
		scanf("%d", &n);
	printf("1 day = 24 hours\n");
	int i=2;
	while(n>1 && i<=n){
		printf("%d days = %d hours\n", i, i*24);
		i++;
	}	
	return 0;
}
