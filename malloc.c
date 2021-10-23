#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a = malloc(sizeof(int));
    *a = 23;
    free(a);
    return 0;
}
