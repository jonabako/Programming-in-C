#include <stdio.h>
double sum25(double v[], int n);
int main(){
	int n, i;
	double arr[20];
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%lf", &arr[i]);
	printf("sum=%lf\n", sum25(arr, n));
	return 0;
}
double sum25(double v[], int n){
	int i;
	double s = 0;
	if(n<6){
		printf("One or both positions are invalid\\n");
		return -111;
	}
	else
		return (v[2]+v[5]);
}
