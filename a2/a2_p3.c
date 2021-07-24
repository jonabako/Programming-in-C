#include <stdio.h>
int main(){
	int w, d, h;
	printf("Enter number of weeks: ");
	scanf("%d", &w);
	printf("Enter number of days: ");
	scanf("%d", &d);
	printf("Enter number of hours: ");
	scanf("%d", &h);
	printf("Total number of hours: %d\n", w*7*24 + d*24 + h);
	return 0;
}
