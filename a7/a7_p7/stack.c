#include <stdio.h>
#include "stack.h"

void push(struct stack *s, int val){
	if(s->count==12)
		printf(" Stack Overflow\n");
	else{
		printf(" %d", val);
		int i;
		for(i=s->count; i>0; i--)
			s->array[i] = s->array[i-1];
		s->array[0] = val;
		s->count++;
	}
}

void pop(struct stack *s){
	if(s->count==0)
		printf(" Stack Underflow");
	else{
		printf(" %d", s->array[0]);
		int i;
		for(i=0; i<s->count; i++)
			s->array[i] = s->array[i+1];
		s->count--;
	}
}

void empty(struct stack *s){
	int i;
	unsigned int temp = s->count;
	for(i=0; i<temp; i++)
		pop(s);
}

void isEmpty(struct stack *s){
	if(s->count==0)
		printf("Stack is empty!\n");
	else
		printf("Stack is not empty!\n");
}
