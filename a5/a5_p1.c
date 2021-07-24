#include <stdio.h>
void print(int n, char ch);
int main(){
	int n;
	char c;
	scanf("%d", &n);
	getchar();
	scanf("%c", &c);
	print(n, c);
	return 0;
}
void print(int n, char ch){
	int i, j;
	for(i=0; i<n; i++){
		for(j=0; j<(n-i); j++){
			printf("%c", ch);
		}
		printf("\n");
	}
}
