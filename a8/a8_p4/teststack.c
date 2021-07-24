/*
CH-230-A
teststack.c
Jona Bako
jbako@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(){
    struct stack* my_stack;
    my_stack = (struct stack*)malloc(sizeof(struct stack));
    if (my_stack == NULL) {exit(1);}
    my_stack->count = 0; // start off with empty stack
    unsigned int number;

    scanf("%d", &number);
    unsigned int numcpy;
	for (numcpy = number; numcpy != 0; numcpy /= 2)
        push(numcpy % 2, my_stack);
    printf("The binary representation of %d is ", number);
    printstack(my_stack);
    // empty my_stack
    free(my_stack);
    return 0;

}
