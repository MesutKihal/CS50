#include <stdio.h>

int main()
{
    int arr[] = {5, 3, 21, 1, 8, 34, 13, 2};
    int minIndex(int start, int end, int arr[]){
        int min = 999999;
        int index;
        for (int i=start; i<end; i++){
            if (arr[i] < min){
                min = arr[i];
                index = i;
            }
        }
        return index;
    }
    
    int temp;
    int len = 8;
    int index;
    for (int i=0; i<len; i++){
        temp = arr[i];
        index = minIndex(i, len, arr);
        arr[i] = arr[index];
        arr[index] = temp;
        
    }
    for (int i=0; i<len; i++){
        printf("%i ", arr[i]);
        
    }
    return 0;
}
