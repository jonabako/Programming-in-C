#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
void upper(char*);
void lower(char*);
void inverse(char*);
void quit(char*);
int main(){
	char s[100];
	fgets(s, 100, stdin);
	s[strlen(s)-1]='\0';
	void (*ptr[5])(char*);
	ptr[1]=upper;
	ptr[2]=lower;
	ptr[3]=inverse;
	ptr[4]=quit;
	char choice;
	while(1){
		scanf("%d", &choice);
		ptr[choice](s);
	}
	return 0;
}
void upper(char *s){
	int i;
	for(i=0; i<strlen(s); i++){
		printf("%c", toupper(s[i]));
	}
	printf("\n");
}
void lower(char *s){
	int i;
	for(i=0; i<strlen(s); i++){
		printf("%c", tolower(s[i]));
	}
	printf("\n");
}

void inverse(char *s){
	int i;
	for(i=0; i<strlen(s); i++){
		if(s[i]==tolower(s[i])){
			printf("%c", toupper(s[i]));
		}
		else if(s[i]==toupper(s[i])){
			printf("%c", tolower(s[i]));
		}
	}
	printf("\n");
}
void quit(char *s){
	exit(0);
}
