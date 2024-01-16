#include <stdio.h>
#include <stdlib.h>

void setArrayValues(int arr[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = value;
    }
}

int main()
{
    int sampleArray[] = {1, 2, 3, 4, 5};

    int size = sizeof(sampleArray) / sizeof(sampleArray[0]);

    int setValue = 10;

    printf("Original Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", sampleArray[i]);
    }
    printf("\n");

    setArrayValues(sampleArray, size, setValue);

    printf("Modified Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", sampleArray[i]);
    }
    return 0;
}