#include <stdio.h>

int main()
{
    int arr[] = {5, 3, 21, 1, 8, 34, 13, 2};
    int minIndex(int start, int end, int arr[]){
        int min;
        int index;
        for (int i=start; i<end; i++){
            if (arr[i] < min){
                min = arr[i];
                index = i;
            }else if (min == 0){
                min = arr[i];
                index = i;
            }
        }
        return index;
    }
    void selectionSort(int arr[], int len){
        int temp;
        for (int i=0; i<len; i++){
            temp = arr[i];
            arr[i] = arr[minIndex(i, len, arr)];
            arr[minIndex(i, len, arr)] = temp;
        }
        for (int i=0; i<len; i++){
            printf("%i ", arr[i]);
        }
    }
    selectionSort(arr, 8);
    return 0;
}
