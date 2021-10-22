#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[] = {5, 3, 21, 1, 8, 34, 13, 2};
    int merge(int arr[], int left[], int right[], size_t lenLeft, size_t lenRight){
        int i = 0;
        int j = 0;
        int len = 0;
        while (i<lenLeft && j < lenRight){
            if (left[i] > right[j]){
                arr[len] = left[i];
                i += 1;
                len += 1;
            }else if (left[i] <= right[j]){
                arr[len] = right[j];
                j += 1;
                len += 1;
            }
        }
        while (j < lenRight){
            arr[len] = right[j];
            j += 1;
            len += 1;
        }
        while (i < lenLeft){
            arr[len] = left[i];
            i += 1;
            len += 1;
        }
        return *arr;
    }
    return 0;
}
