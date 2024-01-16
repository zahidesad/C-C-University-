#include <stdio.h>
#include <stdlib.h>

// 1 2 3 4 5
//
float *shift_right(float *array, int arraySize, int left, int right, int distance)
{
    for (int i = right; i >= left; i--)
    {
        int position = (i + distance) % arraySize;
        array[position] = array[i];
    }
    return array;
}

float *shift_right_alt(float *array, int arraySize, int left, int right, int distance)
{
    float *copyArray = malloc (arraySize * sizeof(float));
    if (arraySize < right + distance)
    {
        copyArray = realloc(array, sizeof(float) * (distance + right + 1));
    }

    for (int i = right; i >= left; i--)
    {
        int position = (i + distance);
        copyArray[position] = copyArray[i];
    }
    return copyArray; 
}

int main()
{
    float numbers[] = {1, 2, 3, 4, 5, 6, 7};

    float *arr = shift_right_alt(numbers, sizeof(numbers) / sizeof(numbers[0]), 1, 2, 8);
    
    for (int i = 0; i < 10; i++)
    {
        printf("%.0f ", arr[i]);
    }
    return 0;
}
