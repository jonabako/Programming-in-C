#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct person {
	char name[30];
	int age;
};

void scan_array(struct person *arr, int n){
	int i;
	for(i=0; i<n; i++){
		getchar();
		fgets(arr[i].name, 30, stdin);
		(arr[i].name)[strlen(arr[i].name)-1] = '\0';
		scanf("%d", &arr[i].age);
	}
}

void print_array(struct person *arr, int n){
	int i;
	for(i=0; i<n; i++){
		if(i==n-1)
			printf("{%s, %d};\n", arr[i].name, arr[i].age);
		else
			printf("{%s, %d}; ", arr[i].name, arr[i].age);
	}
}

void swap_people(struct person *x, struct person *y){
	int a;
	char n[30];
	a = x->age;
	x->age = y->age;
	y->age = a;
	strcpy(n, x->name);
	strcpy(x->name, y->name);
	strcpy(y->name, n);
}

int agecmp(struct person x, struct person y){
	if(x.age>y.age)
		return 1;
	if(x.age<y.age)
		return -1;
	if(x.age==y.age)
		return namecmp(x, y);
}

int namecmp(struct person x, struct person y){
	int i;
	int count = 0;
	if(strlen(x.name)==strlen(y.name)){
		for(i=0; i<strlen(x.name); i++){
			if(x.name[i]==y.name[i])
				count++;
		}
	}
	if(strlen(x.name)==strlen(y.name) && count==strlen(x.name)){
			if(x.age==y.age)
				return 0;
			else
				return agecmp(x, y);
	}
	else{
		for(i=0; i<30; i++){
			if(x.name[i]>y.name[i]){
				return 1;
				break;
			}
			if(x.name[i]<y.name[i]){
				return -1;
				break;
			}
		}
	}
}

void bsort(struct person *arr, int n, int (*func)(struct person, struct person)){
	int i;
	while(1){
		bool swapped = false;
		for(i=1; i<=n-1; i++){
			if(func(arr[i-1], arr[i])==1){
				swap_people(&arr[i-1], &arr[i]);
				swapped = true;
			}
		}
		if(swapped==false)
			break;
	}
}

int main(){
	int n;
	scanf("%d", &n);
	struct person arr[n];
	scan_array(arr, n);
	bsort(arr, n, namecmp);
	print_array(arr, n);
	bsort(arr, n, agecmp);
	print_array(arr, n);	
	return 0;
}
