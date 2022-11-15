#include <stdio.h>
#include <stdlib.h>

#include "LinkedList.h"

int main()
{
    /*LinkedList myList = {.head = NULL, .tail = NULL};
    Add(&myList, 3);*/

    Add(3);
    Add(5);
    Add(7);
    Add(9);
    Add(20);

    InsertAfter(12,5);
    InsertAfter(35,9);


    int x = GetCount();
    printf ("%d\t",x);
    Display();
    int in;
    printf("\nEnter the index: ");
    scanf("%d",&in);
    int y = GetDataByIndex(in);
    printf ("\n%d\t",y);


    return 0;
}
