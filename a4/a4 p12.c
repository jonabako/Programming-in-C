/*Your program should repeatedly print the character to be replaced, the replacing character and the strings on the screen 
from the main function before and after the replacement.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void replaceAll(char *str, char c, char e){
	for(str;str<str+strlen(str);str++){
		if(*str==c)
			*str=e;
	}
}

int main(){
	char *str = (char*)malloc(sizeof(char)*80);
	char c, e;
	if(str==NULL)
		exit(1);
	while(1){
		fgets(str, sizeof(str), stdin);
		str[strlen(str)-1]='\0';
		if(str[0]=='s' && str[1]=='t' && str[2]=='o' && str[3]=='p')
			break;
		scanf("%c", &c);
		getchar();
		scanf("%c", &e);
		getchar();
		printf("The character to be replaced: %c\n", c);
		printf("The replacing character: %c\n", e);
		printf("String before the replacement: %s\n", str);
		replaceAll(str, c, e);
		printf("String after the replacement: %s\n", str);
	}
	return 0;
}
