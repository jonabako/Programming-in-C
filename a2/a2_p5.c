#include <stdio.h>
int main(){
	int a;
	scanf("%d", &a);
	printf("Original value of a = %d\n", a);
	int *ptr_a = &a;
	printf("Address of a = %p\n", ptr_a);
	*ptr_a+=5;
	printf("Modified value of a = %d\n", a); // or using *ptr_a
	printf("Address of a = %p\n", ptr_a);
	return 0;
}
