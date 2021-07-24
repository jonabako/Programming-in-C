#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *head = NULL;

void addFront(int val){
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
		printf("Could not allocate memory!\n");
	newnode->data = val;
	newnode->next = head;
	head = newnode;
}
void addEnd(int val){
	if(head==NULL)
		addFront(val);
	else{
		struct node *newnode = (struct node*)malloc(sizeof(struct node));
		if(newnode==NULL)
			printf("Could not allocate memory!\n");
		newnode->data = val;
		newnode->next = NULL;
		struct node *cursor = head;
		while(cursor->next!=NULL)
			cursor = cursor->next;
		cursor->next = newnode;
	}
}
void removeFirst(){
	if(head==NULL)
		printf("List is empty!\n");
	else{
		struct node *cursor = head->next;
		free(head);
		head = cursor;
	}
}
void dealloc(){
	if(head==NULL)
		printf("List is empty!\n");
	else{
		struct node *cursor;
		while(head!=NULL){
			cursor = head->next;
			free(head);
			head = cursor;
		}
	}
}
void print(){
	if(head==NULL)
		printf("List is empty!\n");
	else{
		struct node *cursor = head;
		while(cursor!=NULL){
			printf("%d ", cursor->data);
			cursor = cursor->next;
		}
		printf("\n");
	}
}
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
