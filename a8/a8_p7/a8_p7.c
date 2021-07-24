#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *f1, *f2, *f3;
	f1 = fopen("text1.txt", "r");
	if(f1==NULL){
		printf("\aInput file cannot be opened!\n");
		exit(1);
	}
	f2 = fopen("text2.txt", "r");
	if(f2==NULL){
		printf("\aInput file cannot be opened!\n");
		exit(2);
	}
	f3 = fopen("merge12.txt", "w");
	if(f3==NULL){
		printf("\aOutput file cannot be opened!\n");
		exit(3);
	}

	char a, b;
	
	while(1){
		fscanf(f1, "%c", &a);
		if(feof(f1))
			break;
		fprintf(f3, "%c", a);
	}
	
	fprintf(f3, "\n");
	
	while(1){
		fscanf(f2, "%c", &b);
		if(feof(f2))
			break;
		fprintf(f3, "%c", b);
	}
	
	fclose(f1);
	fclose(f2);
	fclose(f3);
	
	printf("\aOutput file created successfully!\n");

	return 0;
}
