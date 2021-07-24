#include <stdio.h>
int main(){
	char ch;
	int n, i;
	scanf("%c", &ch);
	scanf("%d", &n);
	for(i=0; i<n; i++){
		if(i==(n-1))
			printf("%c", ch-i);
		else
			printf("%c, ", ch-i);
	}
	return 0;
}
