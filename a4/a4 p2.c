#include <stdio.h>
#include <string.h>
int main(){
	char str[50];
	fgets(str, sizeof(str), stdin);
	str[strlen(str)-1]='\0';
	int i;
	for(i=0; i<strlen(str); i++){
		if(i%2==0)
			printf("%c\n", str[i]);
		else
			printf(" %c\n", str[i]);
	}
	return 0;
}
