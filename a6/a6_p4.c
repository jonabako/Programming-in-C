#include <stdio.h>
#define INTERMEDIATE
int main(){
	int n, i;
	int scal_prod = 0;
	scanf("%d", &n);
	int x[n], y[n];
	for(i=0; i<n; i++)
		scanf("%d", &x[i]);
	for(i=0; i<n; i++)
		scanf("%d", &y[i]);
	#ifdef INTERMEDIATE
	printf("The intermediate product values are:\n");
	for(i=0; i<n; i++)
		printf("%d\n", x[i]*y[i]);
	#endif
	for(i=0; i<n; i++){
		scal_prod = scal_prod + (x[i]*y[i]);
	}
	printf("The scalar product is: %d\n", scal_prod);
	return 0;
}
