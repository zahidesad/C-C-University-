#include <stdio.h>
#include <stdlib.h>

int *shiftToLastIndex(int *arr, int arrSize, int index)
{
    realloc(arr, sizeof(int) * arrSize + 1);
    arr[arrSize] = arr[index];
    return arr;
}

int *shiftToLastIndexV2(int *arr, int arrSize, int number)
{
    int flag = 0;
    int index = 0;
    int count = 0;
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] == number)
        {
            flag = 1;
            index = i;
            count++;
        }
    }
    if (flag == 1)
    {
        realloc(arr, sizeof(int) * (arrSize + count));

        for (int i = 0; i < count; i++)
        {
            arr[arrSize + i] = arr[index];
        }
    }
    return arr;
}

void shiftToLastIndexV3(int *arr, int arrSize, int index, int distance)
{
    if (index + distance < arrSize)
    {
        arr[index + distance] = arr[index];
        arr[index] = 0;
    }
    else
    {
        arr = realloc(arr, (index + distance + 1) * sizeof(int));
        arr[index + distance] = arr[index];

        int lastElementIndex = distance + index;
        for (int i = 0; arrSize < lastElementIndex--; i++)
        {
            arr[arrSize + i] = 0;
        }
    }
}

void shiftToLastIndexV4(int *arr, int arrSize, int left, int right, int distance)
{
    if (right + distance >= arrSize)
    {
        realloc(arr, (right + distance + 1) * sizeof(int));
    }

    for (int i = right; i >= left; i--)
    {
        arr[i + distance] = arr[i];
    }
}

int main()
{
    int *arr = calloc(6, sizeof(int));
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
    arr[5] = 6;

    shiftToLastIndexV4(arr, 6, 1, 3, 4);

    for (int i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}