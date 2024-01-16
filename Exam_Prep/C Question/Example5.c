#include <stdio.h>
#include <stdlib.h>

int *shif_right_v1(int *arr, int size, int index)
{
    arr = realloc(arr, (sizeof(int) * (size + 1)));
    arr[size] = arr[index];

    return arr;
}

int *shif_right_v2(int *arr, int size, int number)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number)
        {
            arr = realloc(arr, (sizeof(int) * (size + 1)));
            arr[size] = number;
            arr[i] = 0;
        }
    }
    return arr;
}

int *shif_right_v3(int *arr, int size, int index, int distance)
{
    if ((index + distance) < size)
    {
        arr[distance + index] = arr[index];
        arr[index] = 0;
    }
    else
    {
        arr = realloc(arr, sizeof(int) * (distance + index + 1));
        arr[distance + index] = arr[index];

        // Aradaki elemanları sıfır yap.
        int lastElement = distance + index;
        for (int i = 0; size < lastElement--; i++)
        {
            arr[size + i] = 0;
        }
    }

    return arr;
}

int *shif_right_v4(int *arr, int size, int left, int right, int distance)
{
    if ((right + distance) >= size)
    {
        arr = realloc(arr, sizeof(int) * (right + distance + 1));
    }

    for (int i = right; i >= left; i--)
    {
        arr[i + distance] = arr[i];
    }

    return arr;
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

    shif_right_v4(arr, 6, 2, 4, 3);

    for (int i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}