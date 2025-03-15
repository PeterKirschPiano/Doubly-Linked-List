#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef int datatype_t;

typedef struct node_s
{
    datatype_t key;
    struct node_s *next_node_p;
    struct node_s *previous_node_p;
}node_t;

typedef struct
{
    node_t  *head_p,
            *rear_p;
    int size;
}list_t;

//****MEMORY MANAGMENT****
//initialize the list
void list_initialize(list_t *list);
//allocate memory for a node and initialize it
node_t *list_node_create(datatype_t new_key, node_t *previous_node_p, node_t *next_node_p);
//free the memory of a node and update the list
int list_node_destroy(node_t *node, list_t *list);

//****ELEMENT MANAGMENT****
//add an element to the rear of the list
int list_element_add(datatype_t new_key, list_t *list);
//print all elements of the list
void list_element_print(node_t *head_p, const int size, const char datatype);
//return memory adress of an node that holds the key in question
node_t *list_element_find(datatype_t key, node_t *head_p);
//free the node and update list -> will use destroy node
//int list_element_destroy(datatype_t element, node_t *head_p, )


//****QUEUE****
//remove the head, return the value as a pointer and update list
datatype_t *list_element_deqeue(node_t **head_p, int *size);

//****STACK****
//removes the rear, returns the value as a pointer and updates list
datatype_t *list_element_pop(node_t **rear_p, int *size);


#endif // LINKED_LIST_H
