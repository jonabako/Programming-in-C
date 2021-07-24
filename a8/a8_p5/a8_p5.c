#include <stdio.h>
#include <stdlib.h>
int main(){
	char a, b;
	FILE *fp1 = fopen("chars.txt", "r");
	if(fp1==NULL){
		printf("\aThe file cannot be opened!\n");
		exit(1);
	}
	fscanf(fp1, "%c%c", &a, &b);
	FILE *fp2 = fopen("codesum.txt", "w");
	if(fp2==NULL){
		printf("\aThe file cannot be opened!\n");
		exit(1);
	}
	fprintf(fp2, "%d",a+b);
	fclose(fp1);
	fclose(fp2);
	printf("\aOutput file successfully created!\n");
	return 0;
}
