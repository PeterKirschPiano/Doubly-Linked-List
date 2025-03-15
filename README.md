# Doubly Linked List Implementation in C

## Overview
This repository contains an implementation of a doubly linked list in C. The linked list supports basic operations including initialization, insertion, deletion, and retrieval of elements. It also provides functionality for queue and stack operations.

## Features
- **Memory Management:**
  - Initialize a linked list
  - Create and destroy nodes dynamically
  
- **Element Management:**
  - Add elements to the rear
  - Print all elements in the list
  - Search for elements in the list
  
- **Queue Operations:**
  - Dequeue elements (remove from the head)
  
- **Stack Operations:**
  - Pop elements (remove from the rear)

## Function Descriptions
### Memory Management
- `void list_initialize(list_t *list)`: Initializes the linked list.
- `node_t *list_node_create(datatype_t new_key, node_t *previous_node_p, node_t *next_node_p)`: Creates a new node.
- `int list_node_destroy(node_t *node, list_t *list)`: Destroys a node and updates the list.

### Element Management
- `int list_element_add(datatype_t new_key, list_t *list)`: Adds an element to the rear of the list.
- `void list_element_print(node_t *head_p, const int size, const char datatype)`: Prints all elements in the list.
- `node_t *list_element_find(datatype_t key, node_t *head_p)`: Searches for a node with a specific key.

### Queue Operations
- `datatype_t *list_element_deqeue(node_t **head_p, int *size)`: Removes and returns the head element.

### Stack Operations
- `datatype_t *list_element_pop(node_t **rear_p, int *size)`: Removes and returns the rear element.

## License
This project is licensed under the MIT License.

