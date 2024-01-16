#include <stdio.h>
#include <stdlib.h>

int *sumArray(int *arr1, int *arr2)
{
    int *sumArr = calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        sumArr[i] = arr1[i] + arr2[i];
    }

    return sumArr;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", sumArray(arr1, arr2)[i]);
    }

    return 0;
}