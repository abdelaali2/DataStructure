#include "stack.h"
#include "queue.h"


int main()
{

    /*push(1);
    push(2);
    push(3);
    push(4);
    Display();
    Pop();
    Display();*/

    enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	display_queue();
	dequeue();
	display_queue();


    return 0;
}
