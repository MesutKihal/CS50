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
    // declare insert function
    void insert(struct node hashtable[], char str[]){
        int index = hash(str, 10);
        int size = (int) strlen(str);
        if (hashtable[index].str[0] == '\0'){
            for (int i=0;i<size;i++){
                hashtable[index].str[i] = str[i];
            }
        }
        // ....
    }
    // test..
    char name[3];
    scanf("%s", name);
    insert(hashtable, name);
    for (int i=0;i<10;i++){
        printf("%d -> %s\n", i, hashtable[i].str);
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
