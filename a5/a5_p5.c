#include <stdio.h>
double scal_prod(double a[], double b[], int n);
void smallest(double arr[], int n);
void largest(double arr[], int n);
int main(){
	int n, i;
	scanf("%d", &n);
	double v[n], w[n];
	for(i=0; i<n; i++)
		scanf("%lf", &v[i]);
	for(i=0; i<n; i++)
		scanf("%lf", &w[i]);
	printf("Scalar product=%lf\n", scal_prod(v, w, n));
	smallest(v, n);
	largest(v, n);
	smallest(w, n);
	largest(w, n);
	return 0;
}
double scal_prod(double a[], double b[], int n){
	int i;
	double sp;
	for(i=0; i<n; i++)
		sp = sp + (a[i]*b[i]);
	return sp;
}
void smallest(double arr[], int n){
	int i, pos;
	double min = arr[0];
	for(i=0; i<n; i++){
		if(arr[i]<min)
			min = arr[i];
	}
	for(i=0; i<n; i++){
		if(arr[i]==min){
			pos = i;
			break;
		}
	}
	printf("The smallest = %lf\n", min);
	printf("Position of smallest = %d\n", pos);
}
void largest(double arr[], int n){
	int i, pos;
	double max = arr[0];
	for(i=0; i<n; i++)
		if(arr[i]>max){
			max = arr[i];
	}
	for(i=0; i<n; i++){
		if(arr[i]==max){
			pos = i;
			break;
		}
	}
	printf("The largest = %lf\n", max);
	printf("Position of largest = %d\n", pos);	
}
