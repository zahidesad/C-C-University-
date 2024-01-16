#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, -1};
    int *array[] = {arr, arr + 1, arr + 2, arr + 3, arr + 4};

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; array[i][j] != -1; j++)
        {
            sum += array[i][j];
        }
    }
    printf("%d", sum);

    return 0;
}