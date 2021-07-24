#ifndef _STACK_H
#define _STACK_H

struct stack {
	unsigned int count;
	int array[12];
};

void push(struct stack*, int);

void pop(struct stack*);

void empty(struct stack*);

void isEmpty(struct stack*);

#endif
