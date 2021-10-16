#include <stdio.h>
// Not Finished
int main()
{
    int arr[] = {5, 3, 21, 1, 8, 34, 13, 2};
    int len = sizeof(arr)/sizeof(arr[0]);
    int merge(int left[], int right[]){
        int lenLeft = sizeof(left)/sizeof(left[0]);
        int lenRight = sizeof(right)/sizeof(right[0]);
        int arr[] = {};
        int i = 0;
        int j = 0;
        while (i<lenLeft && j < lenRight){
            int lenArr = sizeof(arr)/sizeof(arr[0]);
            if (left[i] > right[j]){
                if (lenArr > 0){
                    arr[lenArr-1] = left[i];
                }else{
                    arr[0] = left[i];
                }
                i += 1
            }else if (left[i] >= right[j]){
                if (lenArr > 0){
                    arr[lenArr-1] = right[j];
                }else{
                    arr[0] = right[j];
                }
                j += 1
            }
        }
        while (j < lenRight){
            arr[lenArr-1] = right[j];
            j += 1
        }
        while (i < lenLeft){
            arr[lenArr-1] = left[i];
            i += 1
        }
        return &arr[]
    }
    for (int i=0; i<len; i++){
        printf("%i ", arr[i]);
    }
    return 0;
}
