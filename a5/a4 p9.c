#include <stdio.h>
#include <stdlib.h>
int prodminmax(int arr[], int n);
int main(){
	int n, i;
	scanf("%d", &n);
	int *arr = (int*)malloc(sizeof(int)*n);
	if(arr==NULL)
		exit(1);
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
	printf("Product of smallest and largest element = %d\n", prodminmax(arr, n));
	free(arr);
	return 0;
}
int prodminmax(int arr[], int n){
	int i, max, min;
	max = min = arr[0];
	for(i=0; i<n; i++){
		if(arr[i]>max)
			max = arr[i];
		if(arr[i]<min)
			min = arr[i];
	}
	return max*min;
}
