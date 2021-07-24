#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(){
	struct stack mystruct;
	mystruct.count = 0;
	char c;
	int x;
	while(1){
		scanf(" %c", &c);
		switch(c){
			case 's':
				scanf("%d", &x);
				printf("Pushing");
				push(&mystruct, x);
				break;
			case 'p':
				printf("Popping");
				pop(&mystruct);
				break;
			case 'e':
				printf("Emptying Stack");
				empty(&mystruct);
				break;
			case 'q':
				printf("Quit\n");
				exit(1);
				break;
			default:
				printf("Invalid character!\n");
				break;
		}
		printf("\n");
	}
	return 0;
}
