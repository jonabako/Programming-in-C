#include <stdio.h>
#include <stdlib.h>

struct list{
	int data;
	struct list *next;
};

struct list *head = NULL;

void addFirst(int val){
	struct list *newnode = (struct list*)malloc(sizeof(struct list));
	if(newnode==NULL)
		printf("Cannot allocate memory for node!\n");
	newnode->data = val;
	newnode->next = head;
	head = newnode;
}

void addLast(int val){
	struct list *newnode = (struct list*)malloc(sizeof(struct list));
	if(newnode==NULL)
		printf("Cannot allocate memory for node");
	if(head==NULL)
		addFirst(val);
	else{
		struct list *cursor = head;
		while(cursor->next!=NULL)
			cursor = cursor->next;
		cursor->next = newnode;
		newnode->data = val;
		newnode->next = NULL;
	}
}

void removeFirst(){
	if(head!=NULL){
		struct list *cursor = head;
		head = head->next;
		free(cursor);
	}
	else
		printf("List is empty!\n");
}

void printList(){
	if(head!=NULL){
		struct list *cursor = head;
		while(cursor!=NULL){
			printf("%d ", cursor->data);
			cursor = cursor->next;
		}
		printf("\n");
	}
	else
		printf("List is empty!\n");
}

void deAlloc(){
	if(head!=NULL){
		struct list *cursor;
		while(head!=NULL){
			cursor = head->next;
			free(head);
			head = cursor;
		}
	}
	else
		printf("List is empty!\n");
}

void insertNode(int val, int pos){
	// empty list case
	if(head==NULL && pos!=0)
		printf("Invalid position!\n");
	
	// count nr of elements
	struct list *cursor = head;
	int count = 0;
	while(cursor!=NULL){
		cursor = cursor->next;
		count++;
	}
	
	// invalid cases
	if(pos<0 || pos>count)
		printf("Invalid position!\n");
	else if (pos==0)
		addFirst(val);
	else if (pos==count)
		addLast(val);
	else{
		struct list *newnode = (struct list*)malloc(sizeof(struct list));
		if(newnode==NULL)
			printf("Cannot allocate memory for node");
		newnode->data = val;
		cursor = head;
		int i;
		for(i=0; i<pos-1; i++){
			cursor = cursor->next;
		}
		newnode->next = cursor->next;
		cursor->next = newnode;
	}
}

void reverseList(){
	if(head==NULL)
		printf("List is empty!\n");
	else{
		struct list *p, *n = NULL;
		struct list *c = head;
		while(c!=NULL){
			n = c->next;
			c->next = p;
			p = c;
			c = n;
		}
		head = p;
	}
}

int main(){
	char c;
	int value, position;
	while(1){
		scanf(" %c", &c);
		switch(c){
			case 'a':
				scanf("%d", &value);
				addLast(value);
				break;
			case 'b':
				scanf("%d", &value);
				addFirst(value);
				break;
			case 'r':
				removeFirst();
				break;
			case 'p':
				printList();
				break;
			case 'q':
				deAlloc();
				exit(0);
				break;
			case 'i':
				scanf("%d", &position);
				scanf("%d", &value);
				insertNode(value, position);
				break;
			case 'R':
				reverseList();
				break;
			default:
				printf("Invalid character!\n");
				break;
		}
	}
	return 0;
}
