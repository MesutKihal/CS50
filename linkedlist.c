
#include <stdio.h>
#include <stdlib.h>

int main()
{
    typedef struct node
    {
        int value;
        struct node *next;
    }node;
    node *a = malloc(sizeof(node));
    if (a != NULL){
        a->value = 1;
        a->next = NULL;
    }
    int append(struct node *a, int value){
        node *b = malloc(sizeof(node));
        b->value = value;
        node *temp = a;
        while (temp != NULL){
            if(temp->next == NULL){
                temp->next = b;
                break;
            }
            temp = temp->next;
        }
    }
    void printList(struct node *a){
        node *temp = a;
        while (temp != NULL){
            printf("%d -> ",temp->value);
            temp = temp->next;
        }
    }
    append(a, 2);
    append(a, 3);
    append(a, 4);
    printList(a);
    return 0;
}
