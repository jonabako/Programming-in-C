struct list {
    int num;
    struct list *next;
};

// add element to the front
struct list * push_front ( struct list * my_list , int value );

// add element to the back
struct list * push_back ( struct list * my_list , int value );

// delete an element at the beginning
struct list* delelem(struct list * my_list);

// add element at specific position
struct list* add(struct list* my_list, int pos, int value);

// reverse the list
struct list* reverse(struct list* my_list);

// print a linked list
void print_list ( struct list * my_list );

// deallocate list
void dispose_list ( struct list * my_list );
