#include <stdio.h>
#include <string.h>
#include <ctype.h>
int count_consonants(char* str){
	int i;
	int count = 0;
	for(str; str<str+strlen(str); str++){
		if((tolower(*str)>='a' && tolower(*str)<='z')){
			if(tolower(*str)!='a' && tolower(*str)!='e' && tolower(*str)!='i' && tolower(*str)!='o' && tolower(*str)!='u')
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
