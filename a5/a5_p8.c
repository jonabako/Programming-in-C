#include <stdio.h>
#include <stdlib.h>

void read_matrix(int** m, int row, int col){
	int i, j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++)
			scanf("%d", &m[i][j]);
	}
}

void print_matrix(int** m, int row, int col){
	int i, j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++)
			printf("%d ", m[i][j]);
		printf("\n");
	}
}

int inner_prod(int n, int x[n], int y[n]){
	int i;
	int sum = 0;
	for(i=0; i<n; i++)
		sum += x[i]*y[i];
	return sum;
}

void multiply_matrix(int** a, int** b, int** c, int n, int m, int p){
	int i, j;
	for(i=0; i<n; i++){
		for(j=0; j<p; j++){
			c[i][j] = inner_prod(m, a[i], b[j]);
		}
	}
}

int main(){
	
	int n, m, p, i;
	scanf("%d", &n);
	scanf("%d", &m);
	scanf("%d", &p);
	
	int** a = (int**)malloc(sizeof(int*)*n);
	if(a==NULL)
		exit(1);
	for(i=0; i<n; i++){
		a[i] = (int*)malloc(sizeof(int)*m);
		if(a[i]==NULL)
			exit(2);
	}
	
	int** b = (int**)malloc(sizeof(int*)*m);
	if(b==NULL)
		exit(3);
	for(i=0; i<m; i++){
		b[i] = (int*)malloc(sizeof(int)*p);
		if(b[i]==NULL)
			exit(4);
	}
	
	int** c = (int**)malloc(sizeof(int*)*n);
	if(c==NULL)
		exit(5);
	for(i=0; i<n; i++){
		c[i] = (int*)malloc(sizeof(int)*p);
		if(c[i]==NULL)
			exit(6);
	}
	
	read_matrix(a, n, m);
	read_matrix(b, m, p);
	multiply_matrix(a, b, c, n, m, p);
	
	printf("Matrix A:\n");
	print_matrix(a, n, m);
	printf("Matrix B:\n");
	print_matrix(b, m, p);
	printf("The multiplication result AxB:\n");
	print_matrix(c, n, p);

	free(a);
	free(b);
	free(c);
	
	return 0;
}
