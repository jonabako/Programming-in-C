#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n, i;
	scanf("%d", &n);
	getchar();
	
	FILE *input, *output;
	
	output = fopen("output.txt", "wb");
	if(output==NULL)
		exit(1);

	char name[30];	
	for(i=0; i<n; i++){
		
		fgets(name, sizeof(name), stdin);
		name[strlen(name)-1]='\0';
		input = fopen(name, "rb");
		if(input==NULL){
			exit(2);
		}
		
		char buffer[64];
		char newline = '\n';
		fwrite(buffer, 1, fread(buffer, 1, 64, input), output);
		fwrite(&newline, 1, 1, output);
		fclose(input);
	
	}
	
	fclose(output);
	
	output = fopen("output.txt", "rb");
	if(output==NULL)
		exit(3);
		
	char array[100];
	printf("Concatenating the content of %d files ...\n", n);	
	printf("The result is:\n");
	fread(array, 1, 100, output);
	printf("%s", array);
	fclose(output);
	printf("The result was written into output.txt\n");
	
	return 0;
}
