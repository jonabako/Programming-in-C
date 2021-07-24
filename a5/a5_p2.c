#include <stdio.h>
void divby5(float arr[], int size);
int main(){
	int i;
	float arr[]={5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
	printf("Before:\n");
	for(i=0; i<6; i++)
		printf("%.3f ", arr[i]);
	divby5(arr, 6);
	printf("\nAfter:\n");
	for(i=0; i<6; i++)
		printf("%.3f ", arr[i]);
	printf("\n");
	return 0;
}
void divby5(float arr[], int size){
	int i;
	for(i=0; i<6; i++)
		arr[i]/=5.0;
}
