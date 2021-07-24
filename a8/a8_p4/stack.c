/*
CH-230-A
stack.c
Jona Bako
jbako@jacobs-university.de
*/
#include "stack.h"
#include <stdio.h>
// pushes element down stack

// pops element on top of stack
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

// checks if count of stack is zero
void isEmpty(struct stack* my_list) {
    if (my_list->count == 0) {
        printf("The stack is empty\n");
    }
}
// checks if count of stack is full
void isFull(struct stack* my_list) {
    if (my_list->count == 12) {
        printf("The stack is full\n");
    }
}
// empties stack 1 by 1
void empty(struct stack* my_list) {
    printf("Emptying Stack ");
    while (my_list->count > 0) {
        my_list->count = my_list->count -1;
        printf("%d ", my_list->array[my_list->count]);
    }
    printf("\n");
}
// prints stack by iterating down the count
void printstack(struct stack* my_list){
    int i;
	for (i = my_list->count-1; i >= 0; i--){
        printf("%d", my_list->array[i]);
    }
    printf(".\n");
}
