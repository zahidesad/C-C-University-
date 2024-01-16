#include <stdio.h>
#include <stdlib.h>

int *increaseElementOfArray(int *arr1)
{
    int *newArray = calloc (5,sizeof(int));
    for (int i = 0; i < 5; i++) {
        newArray[i] = arr1[i] + 1;
    }
    return newArray;
}


int main() {
    int arr1[] = {1,2,3,4,5}; 
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", increaseElementOfArray(arr1)[i]);    
    }
            
    return 0;
}