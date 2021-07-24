#include <stdio.h>
void print_matrix(int arr[30][30], int n);
void under_diagonal(int arr[30][30], int n);
int main(){
	int arr[30][30];
	int i, j, n;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		for(j=0; j<n; j++)
			scanf("%d", &arr[i][j]);
	}
	print_matrix(arr, n);
	under_diagonal(arr, n);
	return 0;
}
void print_matrix(int arr[30][30], int n){
	int i, j;
	printf("The entered matrix is:\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
}
void under_diagonal(int arr[30][30], int n){
	int i, j;
	printf("Under the secondary diagonal:\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(i+j>=n)
				printf("%d ", arr[i][j]);
		}
	}
	printf("\n");
}
