#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 8, 13};
    int num;
    scanf("%i", &num);
    int binarySearch(int a, int start, int end){
        int mid = (int) (start + end) / 2;
        if (a > arr[mid]){
            binarySearch(a, mid, end);
        }else if (a < arr[mid]){
            binarySearch(a, start, mid);
        }else if (a == arr[mid]){
            printf("value found.");
        }
    }
    binarySearch(num, 0, 7);
    return 0;
}
