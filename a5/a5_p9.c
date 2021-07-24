#include <stdio.h>
#include <stdlib.h>

void read3D(int*** arr, int r, int c, int d){
	int i, j, k;
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			for(k=0; k<d; k++)
				scanf("%d", &arr[i][j][k]);
		}
	}
}

void print2D(int*** arr, int r, int c, int d){
	int i, j, k;
	for(k=0; k<d; k++){
		printf("Section %d:\n", k+1);
		for(i=0; i<r; i++){
			for(j=0; j<c; j++)
				printf("%d ", arr[i][j][k]);
			printf("\n");
		}
	}
}

int main(){

	int rows, cols, depth, i, j;

	scanf("%d", &rows);
	scanf("%d", &cols);
	scanf("%d", &depth);
	
	int ***arr = (int***)malloc(sizeof(int**)*rows);
	if(arr==NULL)
		exit(1);
	for(i=0; i<rows; i++){
		arr[i] = (int**)malloc(sizeof(int*)*cols);
		if(arr[i]==NULL)
			exit(2);
		for(j=0; j<cols; j++){
			arr[i][j] = (int*)malloc(sizeof(int)*depth);
			if(arr[i][j]==NULL)
				exit(3);
		}
	}
	
	read3D(arr, rows, cols, depth);
	print2D(arr, rows, cols, depth);
	
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++)
			free(arr[i][j]);
		free(arr[i]);
	}
	free(arr);
	
	return 0;
}
