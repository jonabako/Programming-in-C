#include <stdio.h>
#include <string.h>
#include <ctype.h>
int count_consonants(char* str){
	int i;
	int count = 0;
	for(i=0; i<strlen(str); i++){
		if((tolower(str[i])>='a' && tolower(str[i])<='z')){
			if(tolower(str[i])!='a' && tolower(str[i])!='e' && tolower(str[i])!='i' && tolower(str[i])!='o' && tolower(str[i])!='u')
				count++;
		}
	}
	return count;
}
int main(){
	char str[50];
	while(1){
		fgets(str, sizeof(str), stdin);
		if(str[0]=='\n')
			break;
		else{
			str[strlen(str)-1]='\0';
			printf("Number of consonants=%d\n", count_consonants(str));
		}
	}
	return 0;
}
