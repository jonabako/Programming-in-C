#include <stdio.h>
float to_pounds(int kg, int g);
int main(){
	int kg, g;
	scanf("%d", &kg);
	scanf("%d", &g);
	printf("Result of conversion: %f\n", to_pounds(kg, g));
	return 0;
}
float to_pounds(int kg, int g){
	return ((kg+(g/1000.0))*2.2);
}
