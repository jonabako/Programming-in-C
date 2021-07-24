#include <stdio.h>
float convert(int cm);
int main(){
	int length;
	scanf("%d", &length);
	float newlength = convert(length);
	printf("Result of conversion: %f\n", newlength);
	return 0;
}
float convert(int cm){
	float km = cm/100000.0;
	return km;
}
