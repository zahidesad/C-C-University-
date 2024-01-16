#include <stdio.h>
#include <stdlib.h>

int **convertTo2DArray(int *arr, int n, int m)
{
    int **newArray = calloc(n, sizeof(int *));
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        newArray[i] = calloc(m, sizeof(int));
        for (int j = 0; j < m; j++)
        {
            newArray[i][j] = arr[index++];
        }
    }
    return newArray;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

    int **newArray = convertTo2DArray(arr, 4, 2);

    // Printing the result
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", newArray[i][j]);
        }
        printf("\n");
    }
    return 0;
}