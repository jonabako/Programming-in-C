#include <stdio.h>
double sum(int n, double arr[]);
void listC(int n, double arr[]);
void listF(int n, double arr[]);
double avg(int n, double arr[]);
int main(){
	char c;
	int n, i;
	scanf("%c", &c);
	scanf("%d", &n);
	double arr[100];
	for(i=0; i<n; i++)
		scanf("%lf", &arr[i]);
	switch(c){
		case 's':
			printf("%lf\n", sum(n, arr));
			break;
		case 'p':
			listC(n, arr);
			break;
		case 't':
			listF(n, arr);
			break;
		default:
			printf("%lf\n", avg(n, arr));
			break;
	}
	return 0;
}
double sum(int n, double arr[]){
	int i;
	double sum = 0;
	for(i=0; i<n; i++)
		sum+=arr[i];
	return sum;
}
void listC(int n, double arr[]){
	int i;
	for(i=0; i<n; i++)
		printf("%lf\n", arr[i]);
}
void listF(int n, double arr[]){
	int i;
	for(i=0; i<n; i++)
		arr[i]=((9*arr[i])/5)+32;
	listC(n, arr);
}
double avg(int n, double arr[]){
	int i;
	double avg = sum(n, arr)/n;
	return avg;
}
