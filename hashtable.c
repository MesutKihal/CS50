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
    // linked list funtions
    int append(struct node *a, char str[]){
        node *b = malloc(sizeof(node));
        int size = (int) strlen(str);
        for (int i=0;i<size;i++){
            b->str[i] = str[i];
        }
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
            int size = strlen(temp->str);
            for (int i=0;i<size;i++){
                printf("%c",temp->str[i]);
            }
            printf("->");
            temp = temp->next;
        }
    }
    // declare insert function
    void insert(struct node hashtable[], char str[]){
        int index = hash(str, 10);
        int size = (int) strlen(str);
        if (hashtable[index].str[0] == '\0'){
            for (int i=0;i<size;i++){
                hashtable[index].str[i] = str[i];
            }
        }else{
            append(&hashtable[index], str);
        }
    }
    // create a hashtable
    node *hashtable = malloc(sizeof(node)*10); // allocate ten slots in memory of size node
    // insert three names in the hashtable
    for (int i=0; i<3; i++){
        char temp[10];
        scanf("%s", temp);
        insert(hashtable, temp);
    }
    // print the hashtable
    for (int i=0; i<10; i++){
        printf("%d - ", i);
        printList(&hashtable[i]);
        printf("\n");
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
