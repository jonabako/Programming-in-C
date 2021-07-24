#include <stdio.h>
#include <string.h>
int count_lower(char* str);
int main(){
	char str[50];
	while(1){
		fgets(str, 50, stdin);
		if(str[0]=='\n')
			break;
		else
			str[strlen(str)-1]='\0';
		printf("Number of lowercase characters: %d\n", count_lower(str));
	}
	return 0;
}
int count_lower(char* str){
	int i;
	int count = 0;
	char *ptr = str;
	for(i=0; i<strlen(str); i++){
		if('a'<=*(ptr+i) && *(ptr+i)<='z')
			count++;
	}
	return count;
}
