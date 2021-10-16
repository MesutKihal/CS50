#include <stdio.h>
// Not Finished
int main()
{
    int arr[] = {5, 3, 21, 1, 8, 34, 13, 2};
    int len = sizeof(arr)/sizeof(arr[0]);
    int merge(int left[], int right[], size_t lenLeft, size_t lenRight){
        int arr[] = {};
        int i = 0;
        int j = 0;
        while (i<lenLeft && j < lenRight){
            size_t lenArr = sizeof(arr)/sizeof(arr[0]);
            if (left[i] > right[j]){
                if (lenArr > 0){
                    arr[lenArr-1] = left[i];
                }else{
                    arr[0] = left[i];
                }
                i += 1;
            }else if (left[i] >= right[j]){
                if (lenArr > 0){
                    arr[lenArr-1] = right[j];
                }else{
                    arr[0] = right[j];
                }
                j += 1;
            }
        }
        size_t lenArr = sizeof(arr)/sizeof(arr[0]);
        while (j < lenRight){
            arr[lenArr-1] = right[j];
            j += 1;
        }
        while (i < lenLeft){
            arr[lenArr-1] = left[i];
            i += 1;
        }
        return arr[lenArr];
    }
    int mergeSort(int arr[], int lenArr){
        int mid = (int) lenArr/2;
        int left[]={};
        int right[]={};
        int lenLeft = 1;
        int lenRight = 1;
        for (int i=0; i<lenArr; i++){
            if (i >= mid){
                arr[i] = right[i];
                lenRight += 1;
            }else{
                arr[i] = left[i];
                lenLeft += 1;
            }
        }
        if (lenArr == 1){
            return arr[lenArr];
        }else{
            return merge(mergeSort(left, lenLeft), mergeSort(right, lenRight), lenLeft, lenRight);
        }

    }
    mergeSort(arr, 8);
    for (int i=0; i<len; i++){
        printf("%i ", arr[i]);
    }
    
    return 0;
}
