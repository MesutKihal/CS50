#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const int MAX_LEGNTH = 8;

int hash(char str[], int len);


int main()
{
    // create struct node
    typedef struct node
    {
        char str[MAX_LEGNTH];
        struct node *next;
    }node;
    // create hashtable
    node *hashtable = malloc(sizeof(node)*10);
    // populate the hashtable
    for (int i=0; i<10; i++){
        node *temp = malloc(sizeof(node));
        hashtable[i] = *temp;
        free(temp);
    }
    
    return 0;
}
// declare the hash function
int hash(char str[], int len){
    int size = (int) strlen(str);
    int index = 0;
    for (int i=0;i<size; i++){
        index += (int) str[i]/size;
    }
    index = index%len;
    return index;
}
