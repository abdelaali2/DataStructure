#include "stack.h"

typedef struct node Node;

struct node
{
    int Node_data;
    struct node * Node_next;
};

Node * front = NULL;
Node * rear = NULL;

void enqueue(int value)
{
    struct Node * ptr;
    ptr = (Node *)malloc(sizeof(Node));
    ptr->Node_data = value;
    ptr->Node_next = NULL;
    if ((front == NULL) && (rear == NULL))
    {
        front = rear = ptr;
    }
    else
    {
        rear -> next = ptr;
        rear = ptr;
    }
    printf("Node is Inserted\n\n");
}

// Dequeue() operation on a queue
int dequeue()
{
    if (front == NULL)
    {
        printf("\nUnderflow\n");
        return -1;
    }
    else
    {
        struct node * temp = front;
        int temp_data = front -> data;
        front = front -> next;
        free(temp);
        return temp_data;
    }
}

// Display all elements of the queue
void display_queue()
{
    struct node * temp;
    if ((front == NULL) && (rear == NULL))
    {
        printf("\nQueue is Empty\n");
    }
    else
    {
        printf("The queue is \n");
        temp = front;
        while (temp)
        {
            printf("%d--->", temp -> data);
            temp = temp -> next;
        }
        printf("NULL\n\n");
    }
}
