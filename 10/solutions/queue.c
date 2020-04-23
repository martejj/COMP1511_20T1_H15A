#include "queue.h"

#include <stdio.h>
#include <stdlib.h>

typedef struct _node *Node;

struct _queue {
    
    Node head;
    Node tail;

};

struct _node {
        
    Node next;
    int data;
    
};

static Node createNode(int data);

static void freeNode(Node node);

Queue createQueue() {
    Queue newQueue = malloc(sizeof(struct _queue));
    
    newQueue->tail = NULL;
    newQueue->head = NULL;
    
    return newQueue;
}

void freeQueue(Queue queue) {
    free(queue);
}

void addToQueue(Queue queue, int data) {
    Node newNode = createNode(data);
    
    if (queue == NULL) {
        printf("You dumbass!\n");
        exit(1);
    }
    
    if (queue->tail == NULL || queue->head == NULL) {
        queue->tail = newNode;
        queue->head = newNode;
        return;
    }
    
    queue->tail->next = newNode;
    newNode->next = NULL;
    
    queue->tail = newNode;
    
}

int removeFromQueue(Queue queue) {
    
    int retVal = queue->head->data;
    Node nodeToFree = queue->head;
    
    queue->head = queue->head->next;
    
    freeNode(nodeToFree);
    
    return retVal;
    
}

void printQueue(Queue queue) {
    
    Node curr = queue->head;
    
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    
    printf("X\n");
    
}

static Node createNode(int data) {

    Node newNode = malloc(sizeof(struct _node));
    newNode->data = data;
    newNode->next = NULL;
    
    return newNode;
}

static void freeNode(Node node) {
    free(node);
}

