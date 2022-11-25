#include <stdio.h>
#include <stdlib.h>
#ifndef ME
#define  ME
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

void Display()
{
    Stack *current = top;

    while(current != NULL)
    {
        printf("%d   ", current->Data);
        current = current->prev;
        printf("\n \n");

    }
}
void Pop()
{

    if(top == NULL)

        return;

    else
    {
        Stack *node=top;

        top=top->prev;


        free(node);

    }

}
#endif
