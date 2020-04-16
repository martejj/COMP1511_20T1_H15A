// implements functions in list.h
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "list.h"

#define FALSE   0
#define TRUE    1

// returns a copy of the linked list
struct node *copy(struct node *head_old) {
    
    if (head_old == NULL) {
        return NULL;
    }
    
    struct node *head_copy = create_node(head_old->data);
    struct node *curr_copy = head_copy;
    
    struct node *curr_old = head_old;
    curr_old = curr_old->next;
    
    while (curr_old != NULL) {
        
        struct node *copy_node = create_node(curr_old->data);
        
        curr_copy->next = copy_node;
        
        curr_copy = curr_copy->next;
        
        curr_old = curr_old->next;
        
    }
    
    return head_copy;
}

// Recursive function that takes a linked list and returns a complete
// copy of that list
struct node *copyRecursive(struct node *head)
{
	if (head == NULL) {
		return NULL;
	} else {
		// Allocate the new Node in the heap using malloc() & set its data
		struct node *newNode = create_node(head->data);

		// recursively set the .next pointer of the new Node by recur
		// for the rest nodes
		newNode->next = CopyList(head->next);

		return newNode;
	}
}

// returns 1 if the two lists are identical, otherwise returns 0
int identical(struct node *head1, struct node *head2) {
    
    struct node *curr1 = head1;
    struct node *curr2 = head2;
    
    while (curr1 != NULL && curr2 != NULL) {
        
        if (curr1->data != curr2->data) {
            return FALSE;
        }
        
        curr1 = curr1->next;
        curr2 = curr2->next;
        
    }
    
    return TRUE;
}

// returns 1 if list is in strictly increasing order, otherwise returns 0
// Part of lab exercises
int ordered(struct node *head) {
    return 0;   // replace this
}

// given two lists in strictly increasing order,
// return a new linked list (in strictly increasing order) of the elements in both set1 and set2
// Part of lab exercises
struct node *set_intersection(struct node *set1, struct node *set2) {
    return NULL;    // replace this
}

// given two linked lists in strictly increasing order,
// return a new linked list (in strictly increasing order) of the elements in either set1 or set2
// no duplicates (only include them once)
struct node *set_union(struct node *set1, struct node *set2) {
    return NULL;    // replace this
}

// =================================

// given an array of integer values for data items
// returns the head of a linked list with these values
// in the order as they appear in the array
// size gives the size of the array
struct node *create_list(int values[], int size) {
    int i = 0;

    if (size <= 0) {
        // empty linked list (or invalid size)
        return NULL;
    }

    struct node *head = NULL;   // head of the linked list
    struct node *tmp = NULL;    // temporary item we're working with
    struct node *curr = NULL;   // current node we're looking at in the linked list

    while (i < size) {
        tmp = create_node(values[i]);

        // link this node onto our list
        if (head == NULL) {
            // this is the first node in the list
            head = tmp;
            curr = head;
        } else {
            // this is not the first node in the list
            // add it to the end, i.e. after curr
            curr->next = tmp;

            // reset curr to point at the new last node
            curr = tmp;
        }
        i = i + 1;
    }

    return head;
}

// creates a struct node with the given data value
// returns a pointer to this node
struct node *create_node(int data) {

    struct node *new_node = malloc(sizeof(struct size));
    
    new_node->data = data;
    new_node->next = NULL;
    
    return new_node;
}

// prints out the list given the head of a list
void print_list(struct node *head) {
    struct node *curr;
    curr = head;

    while (curr != NULL) {
        printf("[ %d ]-->", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");struct node *curr;
    curr = head;

    while (curr != NULL) {
        printf("[ %d ]-->", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");

}

// frees all the elements in a linked list
void free_list(struct node *head) {
    if (head == NULL) {
        return;
    }
    free_list(head->next);
    free(head);
}

// return the number of items in the linked list
int num_items(struct node *head) {
    struct node *curr = head;
    int count = 0;

    while (curr != NULL) {
        count = count + 1;
        curr = curr->next;
    }

    return count;
}
