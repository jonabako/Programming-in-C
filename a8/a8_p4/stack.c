#include "stack.h"
#include <stdio.h>

struct stack* pop(struct stack* my_list) {
    if (my_list->count > 0) {
        my_list->count = my_list->count -1;
        printf("Popping %d\n", my_list->array[my_list->count]);
    }
    else {
        printf("Pushing Stack Overflow\n");
    }
    return my_list;
}

void push(int i, struct stack* my_list) {
    if (my_list->count < 12) {
        // printf("Pushing %d\n", i);
        my_list->array[my_list->count] = i;
        my_list->count = my_list->count + 1;
    }
    else{
        printf("Popping Stack Underflow\n");
    }
}

void isEmpty(struct stack* my_list) {
    if (my_list->count == 0) {
        printf("The stack is empty\n");
    }
}

void isFull(struct stack* my_list) {
    if (my_list->count == 12) {
        printf("The stack is full\n");
    }
}

void empty(struct stack* my_list) {
    printf("Emptying Stack ");
    while (my_list->count > 0) {
        my_list->count = my_list->count -1;
        printf("%d ", my_list->array[my_list->count]);
    }
    printf("\n");
}

void printstack(struct stack* my_list){
    int i;
	for (i = my_list->count-1; i >= 0; i--){
        printf("%d", my_list->array[i]);
    }
    printf(".\n");
}
