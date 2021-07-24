#include <stdio.h>
int isPrime(int a, int b){
	if(b==1)
		return 1;
	else if(b==0)
		return 0;
	else{
		if(a%b!=0)
			isPrime(a, b-1);
		else
			return 0;
	}
}
int main(){
	int x;
	scanf("%d", &x);
	if(isPrime(x, x-1)==1)
		printf("%d is prime\n", x);
	if(isPrime(x, x-1)==0)
		printf("%d is not prime\n", x);
	return 0;
}
