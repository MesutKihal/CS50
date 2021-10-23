#include <stdio.h>
#include <stdlib.h>


int main()
{
    typedef struct node
    {
        int value;
        struct node *next;
    }
    node;
    
    node *a = malloc(sizeof(node));
    if (a != NULL){
        a->next = NULL;
    }
}
// 45min
