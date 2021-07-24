#include <stdio.h>
void recursive(int n);
int main(){
	int n;
	scanf("%d", &n);
	recursive(n);
	return 0;
}
void recursive(int n){
	if(n>1){
		printf("%d, ", n);
		recursive(n-1);
	}
	else if(n==1)
		printf("1\n");
	else
		printf("Invalid value!\n");
}
