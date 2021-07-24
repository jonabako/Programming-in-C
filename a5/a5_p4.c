#include <stdio.h>
#include <stdlib.h>
void divby5(float arr[], int size);
int main(){
	int i, n;
	scanf("%d", &n);
	float *arr = (float*)malloc(sizeof(float)*n);
	if(arr==NULL)
		exit(1);
	for(i=0; i<6; i++)
		scanf("%f", &arr[i]);
	printf("Before:\n");
	for(i=0; i<6; i++)
		printf("%.3f ", arr[i]);
	divby5(arr, 6);
	printf("\nAfter:\n");
	for(i=0; i<6; i++)
		printf("%.3f ", arr[i]);
	printf("\n");
	free(arr);
	return 0;
}
void divby5(float arr[], int size){
	int i;
	for(i=0; i<6; i++)
		arr[i]/=5.0;
}
