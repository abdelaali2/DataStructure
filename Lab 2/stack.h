#include <stdio.h>
#include <stdlib.h>
typedef struct Stack Stack;
struct Stack
{
    int Data;
    Stack *prev;
    Stack *top ;
};
Stack *top=NULL;
void push(int data)

{

    Stack*node = malloc(sizeof(Stack));
    node ->Data= data;
    node->prev=NULL;

    if(top == NULL)
    {
        top = node;
    }
    else
    {

        node->prev=top;
        top=node;

    }

}

