#include <stdio.h>
#include <stdlib.h>

int asc(const void *a, const void *b) {
   return (*(int*)a - *(int*)b);
}

int dsc(const void *a, const void *b) {
   return (*(int*)b - *(int*)a);
}

void print_array(int *arr, int n){
	int i;
	for(i=0; i<n; i++){
		if(i==n-1)
			printf("%d\n", arr[i]);
		else
			printf("%d ", arr[i]);
	}
}

int main(){
	int n, i;
	scanf("%d", &n);
	int arr[n];
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
	char c;
	while(1){
		getchar();
		scanf("%c", &c);
		switch(c){
			case 'a':
				qsort(arr, n, sizeof(int), asc);
				print_array(arr, n);
				break;
			case 'd':
				qsort(arr, n, sizeof(int), dsc);
				print_array(arr, n);
				break;
			case 'e':
				exit(1);
				break;
			default:
				printf("Invalid character!\n");
				break;
		}
	}
	return 0;
}
