#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"

struct list * push_front ( struct list * my_list , int value ) {
    struct list * newel ;
    newel = (struct list *) malloc ( sizeof ( struct list ));
    if ( newel == NULL ) {
        printf ("Error allocating memory\n");
        return my_list ;
    }
    newel -> num = value ;
    newel -> next = my_list ;
    return newel ;
}

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
    return my_list ;
}

struct list* delelem(struct list * my_list){
    struct list* cursor  = my_list;
    if (my_list == NULL){
        return my_list;
    }
    my_list = my_list->next;
    free(cursor);
    return(my_list);
}

struct list* add(struct list* my_list, int pos, int value){
    struct list * cursor ;
    cursor = my_list ;
    struct list* newel = (struct list *) malloc ( sizeof ( struct list ));
    if ( newel == NULL ) {
        printf (" Error allocating memory \n");
        return my_list ;
    }
    int poscount = 1;
    if (pos < 0){
        printf("Invalid position!\n");
        return my_list;
    }
    while ( cursor -> next != NULL && poscount < pos ){
        cursor = cursor -> next ;
        poscount++;
    }
    if(pos > poscount){
        printf("Invalid position!\n");
        return my_list;
    }
    struct list* cursor2 = cursor;
    newel->num = value;
    cursor2 = cursor2->next;
    
    cursor->next= newel;
    newel->next = cursor2;
    
    return my_list ;
}

struct list* reverse(struct list* my_list) {
    struct list* previous = NULL;
    struct list* current = my_list;
    struct list* next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    my_list = previous;
    return my_list;
}

void print_list ( struct list * my_list ) {
    struct list * p ;
    for ( p = my_list ; p; p = p -> next ) {
        printf ("%d ", p -> num ) ;
    }
    printf("\n");
}

void dispose_list ( struct list * my_list ) {
    struct list * nextelem ;
    while ( my_list != NULL ) {
        nextelem = my_list -> next ;
        free ( my_list ) ;
        my_list = nextelem ;
    }
}
