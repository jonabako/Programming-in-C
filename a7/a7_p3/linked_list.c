/*
CH-230-A
linked_list.c
Jona Bako
jbako@jacobs-university.de
*/
#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"

// add element to the front
struct list * push_front ( struct list * my_list , int value ) {
    struct list * newel ;
    newel = (struct list *) malloc ( sizeof ( struct list ));
    if ( newel == NULL ) {
        printf ("Error allocating memory\n");
        return my_list ;
    }
    newel -> num = value ;
    newel -> next = my_list ;
    // added to front
    return newel ;
}

// add element to the back
struct list * push_back ( struct list * my_list , int value ) {
    struct list * cursor , * newel ;
    cursor = my_list ;
    newel = ( struct list *) malloc ( sizeof ( struct list ));
    if ( newel == NULL ) {
        printf ("Error allocating memory\n");
        return my_list ;
    }
    newel -> num = value ;
    newel -> next = NULL ;
    if ( my_list == NULL )
        return newel ;
    while ( cursor -> next != NULL )
        cursor = cursor -> next ;
    cursor -> next = newel ;
    // added to back
    return my_list ;
}
// delete an element at the beginning
struct list* delelem(struct list * my_list){
    struct list* cursor  = my_list;
    if (my_list == NULL){
        return my_list;
    }
    my_list = my_list->next;
    free(cursor);
    // deleted
    return(my_list);
}
// adds new element to function
struct list* add(struct list* my_list, int pos, int value){
    struct list * cursor ;
    cursor = my_list ;
    struct list* newel = (struct list *) malloc ( sizeof ( struct list ));
    if ( newel == NULL ) {
        printf (" Error allocating memory \n");
        return my_list ;
    }
    // counts at 1 to be 1 node from the needed one
    int poscount = 1;
    if (pos < 0){
        printf("Invalid position!\n");
        return my_list;
    }
    while ( cursor -> next != NULL && poscount < pos ){
        cursor = cursor -> next ;
        poscount++;
    }
    // if the position is bigger than the number of struct list
    if(pos > poscount){
        printf("Invalid position!\n");
        return my_list;
    }
    struct list* cursor2 = cursor;
    newel->num = value;
    cursor2 = cursor2->next;
    
    cursor->next= newel;
    newel->next = cursor2;
    
    // added to back
    return my_list ;
}
// reverses the list
struct list* reverse(struct list* my_list) {
    // uses 3 reference pointers to iterate thru the linked list
    struct list* previous = NULL;
    struct list* current = my_list;
    struct list* next = NULL;
    while (current != NULL) {
        next = current->next;
        // reverses
        current->next = previous;
        // moves pointers ahead
        previous = current;
        current = next;
    }
    my_list = previous;
    // previous ends up as the last item at the end of while iteration.
    return my_list;
}

// print a linked list
void print_list ( struct list * my_list ) {
    struct list * p ;
    // starting the printing
    for ( p = my_list ; p; p = p -> next ) {
        printf ("%d ", p -> num ) ;
    }
    printf("\n");
}
// free everything
void dispose_list ( struct list * my_list ) {
    struct list * nextelem ;
    while ( my_list != NULL ) {
        nextelem = my_list -> next ;
        free ( my_list ) ;
        my_list = nextelem ;
    }
}
