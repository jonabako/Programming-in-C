#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char s1[30], s2[30];
	FILE *f1, *f2, *f3;
	double a, b;

	fgets(s1, sizeof(s1), stdin);
	s1[strlen(s1)-1]='\0';
	f1 = fopen(s1, "r");
	if(f1==NULL){
		printf("\aInput file cannot be opened!\n");
		exit(1);
	}

	fgets(s2, sizeof(s2), stdin);
	s2[strlen(s2)-1]='\0';
	f2 = fopen(s2, "r");
	if(f2==NULL){
		printf("\aInput file cannot be opened!\n");
		exit(2);
	}
	
	fscanf(f1, "%lf", &a);
	fscanf(f2, "%lf", &b);
	
	f3 = fopen("results.txt", "w");
	if(f3==NULL){
		printf("\aOutput file cannot be opened!\n");
		exit(3);
	}

	fprintf(f3, "Sum = %lf\n", a+b);
	fprintf(f3, "Difference = %lf\n", a-b);
	fprintf(f3, "Product = %lf\n", a*b);
	fprintf(f3, "Devision = %lf\n", a/b);
	
	fclose(f1);
	fclose(f2);
	fclose(f3);
	
	printf("\aOutput file successfully created!\n");
	
	return 0;
}
