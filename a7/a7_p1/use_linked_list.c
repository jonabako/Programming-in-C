#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(){
	char c;
	int x;
	while(1){
		scanf(" %c", &c);
		switch(c){
			case 'a':
				scanf("%d", &x);
				addEnd(x);
				break;
			case 'b':
				scanf("%d", &x);
				addFront(x);
				break;
			case 'r':
				removeFirst();
				break;
			case 'p':
				print();
				break;
			case 'q':
				dealloc();
				exit(1);
				break;
			default:
				printf("Invalid character!\n");
				break;
		}
	}
	return 0;
}
