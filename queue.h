//
// Created by jplop on 17/10/2022.
//

#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct queue Queue;
Queue* queue_new();
void queue_append(Queue *queue, int value_to_append);

int queue_empty(Queue *queue);
int queue_peek(Queue *queue);
int queue_remove(Queue *queue);

#endif //QUEUE_QUEUE_H
