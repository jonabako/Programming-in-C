#include <stdio.h>
#include <stdlib.h>
void greatest(int *arr, int n);
int main(){
	int n, i;
	scanf("%d", &n);
	int *arr = (int*)malloc(sizeof(int)*n);
	if(arr==NULL)
		exit(1);
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
	greatest(arr, n);
	free(arr);
	return 0;
}
void greatest(int *arr, int n){
	int i;
	int max, min = arr[0];
	for(i=0; i<n; i++){
		if(arr[i]>max)
			max = arr[i];
		if(arr[i]<min)
			min = arr[i];
	}
	printf("Max = %d\n", max);
	printf("Min = %d\n", min);
}
