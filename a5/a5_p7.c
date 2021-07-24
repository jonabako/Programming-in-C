#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char a[100], b[100];
	fgets(a, sizeof(a), stdin);
	a[strlen(a)-1]='\0';
	fgets(b, sizeof(b), stdin);
	b[strlen(b)-1]='\0';
	char* c = (char*)malloc(sizeof(char)*(strlen(a)+strlen(b)));
	if(c==NULL)
		exit(1);
	strcpy(c, a);
	strcat(c, b);
	printf("Result of concatenation: %s\n", c);
	free(c);
	return 0;
}
