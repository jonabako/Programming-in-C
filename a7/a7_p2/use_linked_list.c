/*
CH-230-A
use_linked_list.c
Jona Bako
jbako@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(){
    char c;
    int x;
    int pos;
    struct list* ptr = NULL;
    int cont = 1;
    while (cont == 1){
        scanf(" %c", &c);
        // // call specific function for each case of input
        switch(c){
            case 'a':
                scanf("%d", &x);
                ptr = push_back(ptr, x);
                break;
            case 'b':
                scanf("%d", &x);
                ptr = push_front(ptr, x);
                break;
            case 'r':
                ptr = delelem(ptr);
                break;
            case 'p':
                print_list(ptr);
                break;
            case 'q':
                dispose_list(ptr);
                cont = 0;
                break;
            case 'i':
                scanf("%d", &pos);
                scanf("%d", &x);
                add(ptr, pos, x);
                break;
            case 'R':
                ptr = reverse(ptr);
                break;
            default:
                printf("not a valid command\n");
                break;
        }   
    }
}
