#include <stdio.h>
float sum(int n, float arr[]);
float avg(int n, float arr[]);
int main(){
	float arr[10];
	int i;
	int count = 0;
	printf("Elements of array:\n");
	for(i=0; i<10; i++){
		scanf("%f", &arr[i]);
		if(arr[i]==-99.0){
			arr[i]=0;
			break;
		}
		count++;
	}
	printf("Sum = %f\n", sum(count, arr));
	printf("Average = %f\n", avg(count, arr));
	return 0;
}
float sum(int n, float arr[]){
	int i;
	float s = 0;
	for(i=0; i<n; i++)
		s+=arr[i];
	return s;
}
float avg(int n, float arr[]){
	return (sum(n, arr)/n);
}
