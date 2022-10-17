//
// Created by jplop on 17/10/2022.
//

#include "queue.h"

typedef struct node
{
    int value;
    struct node *next;
}Node;

struct queue
{
    Node *head;
    Node *tail;
};

Node* node_new(int value_to_append)
{
    Node *new_node = malloc(sizeof(Node));
    new_node->next=NULL;
    new_node->value=value_to_append;
    return new_node;
}

Queue* queue_new()
{
    Queue *new_queue = malloc(sizeof(Queue));
    new_queue->head=NULL;
    new_queue->tail=NULL;
    return new_queue;
}

void queue_append(Queue *queue, int value_to_append)
{
    if(queue->head==NULL)
    {
        queue->head = node_new(value_to_append);
        queue->tail = queue->head;
    }else
    {
        Node *current = queue->tail;
        current->next = node_new(value_to_append);
        queue->tail = current->next;
    }
}

int queue_empty(Queue *queue)
{
    if(queue->head==NULL)
    {
        return 1;
    }
    return 0;
}

int queue_peek(Queue *queue)
{
    return queue->head->value;
}

int queue_remove(Queue *queue)
{
    Node *to_remove = queue->head;
    int value_to_return = to_remove->value;
    queue->head = to_remove->next;
    free(to_remove);
    return value_to_return;
}
