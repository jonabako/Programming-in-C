#include <stdio.h>
#include <math.h>
float geometric_mean(float arr[], int num);
float max(float arr[], int num);
float min(float arr[], int num);
float sum(float arr[], int num);
int main(){
	float arr[15];
	int i;
	int count = 0;
	for(i=0; i<15; i++){
		scanf("%f", &arr[i]);
		if(arr[i]<0){
			arr[i]=0;
			break;
		}
		count++;
	}
	char c;
	getchar();
	scanf("%c", &c);
	switch(c){
		case 'm':
			printf("geometric mean = %f\n",  geometric_mean(arr, count));
			break;
		case 'h':
			printf("highest number = %f\n",  max(arr, count));
			break;
		case 'l':
			printf("lowest number = %f\n",  min(arr, count));
			break;
		case 's':
			printf("sum of elements = %f\n",  sum(arr, count));
			break;
		default:
			printf("Invalid input!\n");
			break;
	}
	return 0;
}
float geometric_mean(float arr[], int num){
	int i;
	float prod = 1.0;
	for(i=0; i<num; i++)
		prod*=arr[i];
	return pow(prod, 1.0/num);
}
float max(float arr[], int num){
	int i;
	float max = 0;
	for(i=0; i<num; i++){
		if(arr[i]>max)
			max = arr[i];
	}
	return max;
}
float min(float arr[], int num){
	int i;
	float min=arr[0];
	for(i=0; i<num; i++){
		if(arr[i]<min)
			min = arr[i];
	}
	return min;
}
float sum(float arr[], int num){
	int i;
	float sum = 0;
	for(i=0; i<num; i++)
		sum+=arr[i];
	return sum;
}
