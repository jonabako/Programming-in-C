#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isSpecial(char c){
	if((c==' ') || (c==',') || (c=='?') || (c=='!') || (c=='.') || (c=='\t') || (c== '\r') || (c=='\n'))
		return 1;
	else
		return 0;
}

int main(){
	char name[100];
	printf("Enter the input file name:\n");
	fgets(name, sizeof(name), stdin);
	name[strlen(name)-1]='\0';
	FILE *fp = fopen(name, "r");
	if(fp==NULL){
		printf("\aFile cannot be opened!\n");
		exit(1);
	}

	char a, b, c, d;
	int count, time = 0;
	while(1){
		time++;
		fscanf(fp, "%c%c", &a, &b);
		if(time%2==1)
			c = b;
		if(time%2==0)
			d = b;
		if(feof(fp))
			break;

		if(isSpecial(a)==0 && isSpecial(b)==1)
			count++;
		if(time%2==0 && time!=1){
			if(isSpecial(c)==0 && isSpecial(a)==1)
				count++;
		}	
		else if(time%2==1 && time!=1){
			if(isSpecial(d)==0 && isSpecial(a)==1)
				count++;
		}
	}

	printf("The file contains %d words.\n", count);
	
	fclose(fp);
	
	return 0;
	
}
