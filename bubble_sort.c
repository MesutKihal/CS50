#include <stdio.h>

int main()
{
    int arr[] = {5, 3, 21, 1, 8, 34, 13, 2};
    int len = 8;
    for (int j=0; j<len-2; j++){
        for (int i=0; i<len-1; i++){
            if (arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                
            } 
        }
    }
    for (int k=0; k<len; k++){
        printf("%i ", arr[k]);
    }
    return 0;
}
