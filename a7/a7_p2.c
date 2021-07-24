#include <stdio.h>
#include <stdlib.h>

struct node{
	char data;
	struct node *prev;
	struct node *next;
};

struct node *head = NULL;

void addFront(char val){
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
		printf("Could not allocate memory!\n");
	newnode->data = val;
	newnode->next = head;
	newnode->prev = NULL;
	if(head!=NULL)
		head->prev = newnode;
	head = newnode;
}
void removeChar(char c){
	int count = 0;
	struct node *cursor = head;
	struct node *temp, *c1, *c2;
	while(cursor!=NULL){
		if(cursor->data==c){
			count++;
			temp = cursor;
			if(cursor->prev==NULL){
				free(temp);
				head = cursor->next;
			}
			else if(cursor->next==NULL){
				c1 = cursor->prev;
				free(temp);
				c1->next = NULL;
			}
			else{
				c1 = cursor->prev;
				c2 = cursor->next;	
				free(temp);
				c1->next = cursor->next;
				c2->prev = cursor->prev;
			}
		}
		cursor = cursor->next;
	}
	if(count==0)
		printf("The element is not in the list!\n");
}
void printForward(){
	struct node *cursor = head;
	while(cursor!=NULL){
		printf("%c ", cursor->data);
		cursor = cursor->next;
	}
	printf("\n");
}
void printBackward(){
	struct node *cursor = head;
	while(cursor->next!=NULL)
		cursor = cursor->next;
	while(cursor!=head->prev){
		printf("%c ", cursor->data);
		cursor = cursor->prev;
	}
	printf("\n");
}
void dealloc(){
	struct node *cursor = head;
	while(cursor!=NULL){
		cursor = cursor->next;
		free(head);
		head = cursor;
	}
}
