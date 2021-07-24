#include <stdio.h>
#include <string.h>
int main(){
	char one[50], two[50], three[50], temp[50];
	fgets(one, sizeof(one), stdin);
	one[strlen(one)-1]='\0';
	fgets(two, sizeof(two), stdin);
	two[strlen(two)-1]='\0';
	printf("length1=%d\n", strlen(one));
	printf("length2=%d\n", strlen(two));
	strcpy(temp, one);
	strcat(temp, two);
	printf("concatenation=%s\n", temp);
	strcpy(three, two);
	printf("copy=%s\n", three);
	if(strcmp(one, two)<0)
		printf("one is smaller than two\n");
	else if(strcmp(one, two)>0)
		printf("one is larger than two\n");
	else
		printf("one is equal to two\n");
	char c;
	scanf("%c", &c);
	char *pos;
	pos = strchr(two, c);
	if(pos==NULL)
		printf("The character is not in the string\n");
	else
 		printf("position=%ld\n", pos-two);
	return 0;
}
