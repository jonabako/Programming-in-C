#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int i;
	float arr[n];
	for(i=0;i<n;i++)
		scanf("%f", &arr[i]);
	float* ptr = arr;
	for(ptr; ptr<(arr+n); ptr++){
		if(*ptr<0)
			break;
	}
	printf("Before the first negative value: %d elements\n", ptr-arr);
	return 0;
}
