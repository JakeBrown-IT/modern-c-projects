#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>  /* C99 only */

typedef int item_t Item;
typedef struct queue_t *Queue;

Queue create(void);
void destroy(Queue);
Queue enqueue(Queue, Item);  /* insert at end of queue */
Queue dequeue(Queue);        /* remove from beginning of queue */
Item front(Queue);           /* return front of queue */
Item back(Queue);            /* return back of queue */
bool is_empty(Queue);        /* is queue empty */

#endif