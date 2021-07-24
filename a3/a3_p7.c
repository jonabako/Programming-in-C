#include <stdio.h>
void print_form(int n, int m, char c);
int main(){
	int n, m;
	char c;
	scanf("%d", &n);
	scanf("%d", &m);
	getchar();
	scanf("%c", &c);
	print_form(n, m, c);
	return 0;
}
void print_form(int n, int m, char c){
	int i, j;
	for(i=0; i<n; i++, m++){
		for(j=0; j<m; j++)
			printf("%c", c);
		printf("\n");
	}
}
