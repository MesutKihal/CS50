#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // create struct dict
    struct dict
    {
        char key[10];
        char value[30];
    }dict;
    
    // declate the set function
    void set(char key[], char value[], struct dict arr[], int size){
        int key_len = (int) strlen(key);
        int value_len = (int) strlen(value);
        
        for (int i=0; i<size; i++){
            if (arr[i].key[0] == '\0'){
                for (int j=0; j<key_len; j++){
                    arr[i].key[j] = key[j];
                }
                        
                for (int j=0; j<value_len; j++){
                    arr[i].value[j] = value[j];
                }
                break;
            }
        }
        
        
    }
    // delcare the printDict function
    void printDict(struct dict arr[], int size){
        int key_len;
        int value_len;
        int i=0;
        int j=0;
        while (i<size){
            key_len = (int) strlen(arr[i].key);
            value_len = (int) strlen(arr[i].value);
            j = 0;
            while (j<key_len){
                printf("%c", arr[i].key[j]);
                j += 1;
            }
            printf("\t|\t");
            j = 0;
            while (j<value_len){
                printf("%c", arr[i].value[j]);
                j += 1;
            }
            printf("\n");
            i += 1;
        }
        
    }
    // create a dict array with the size of five dicts
    struct dict *arr = malloc(sizeof(dict) * 5); // allocate five slots in memory with the size of a dict
    // populate the dict array
    set("bob", "bob.25@gmail.com", arr, 5);
    set("mary", "mary.wood1@hotmail.com", arr, 5);
    set("jay", "jay_martel@protonmail.com", arr, 5);
    set("tasha", "rtasha123@yahoo.com", arr, 5);
    set("cole", "cole.cole-21@gmail.com", arr, 5);
    // print the dict array
    printDict(arr, 5);
    
    return 0;
}
