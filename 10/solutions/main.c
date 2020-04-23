#include "queue.h"

#include <stdio.h>

int main(void) {

    Queue queue = createQueue();
    
    addToQueue(queue, 1);
    addToQueue(queue, 4);
    addToQueue(queue, 32);
    addToQueue(queue, 1432);
    addToQueue(queue, 12);
    addToQueue(queue, 1511);
    
    printQueue(queue);
    
    
    int retVal = removeFromQueue(queue);
    printf("We removed %d!\n", retVal);
    
    printQueue(queue);
    
    return 0;

}
