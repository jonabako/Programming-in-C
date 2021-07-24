#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int count_insensitive(char *str, char c){
	int count = 0;
	for(str; str<str+strlen(str); str++){
		if(tolower(*str)==tolower(c))
			count++;
	}
	return count;
}

int main(){
	char *buff = (char*)malloc(sizeof(char)*50);
	if(buff==NULL)
		exit(1);
	fgets(buff, 50, stdin);
	buff[strlen(buff)-1]='\0';
	char *str = (char*)malloc(sizeof(char)*strlen(buff));
	if(str==NULL)
		exit(2);
	strcpy(str, buff);
	free(buff);
	printf("The character 'b' occurs %d times.\n", count_insensitive(str, 'b'));
	printf("The character 'H' occurs %d times.\n", count_insensitive(str, 'H'));
	printf("The character '8' occurs %d times.\n", count_insensitive(str, '8'));
	printf("The character 'u' occurs %d times.\n", count_insensitive(str, 'u'));
	printf("The character '$' occurs %d times.\n", count_insensitive(str, '$'));
	free(str);
	return 0;
}
