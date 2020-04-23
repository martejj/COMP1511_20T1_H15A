
typedef struct _queue *Queue;

Queue createQueue();

void freeQueue(Queue queue);

void addToQueue(Queue queue, int data);

int removeFromQueue(Queue queue);

void printQueue(Queue queue);
