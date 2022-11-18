#include "stack.h"

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

int main()
{
    int data;
    push(1);
    push(2);
    push(3);
    push(4);
    Display();
    Pop();
    Display();
    return 0;
}
