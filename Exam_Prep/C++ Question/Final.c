#include <stdio.h>
#include <stdlib.h>

int *func(int *array, int arraySize, int index)
{
    int *copyArray = calloc(arraySize, sizeof(int));
    for (int i = 0; i < arraySize; i++)
    {
        copyArray[i] = array[i];
    }

    copyArray = realloc(copyArray, sizeof(int) * (arraySize + 2));

    for (int i = 0; i < arraySize; i++)
    {
        copyArray[i + 1] = array[i];
    }
    copyArray[0] = array[index];
    copyArray[arraySize + 1] = array[index];
    return copyArray;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 2, 3, 6};
    int *newArray = func(arr, 8, 4);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", newArray[i]);
    }
    return 0;
}