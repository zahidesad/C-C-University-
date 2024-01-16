#include <stdio.h>
#include <stdlib.h>

int* sumArray(int *array1 , int *array2, int size){
    static int sumArr[5];

    for (int i = 0; i < size; i++)
    {
        sumArr[i] = *array1 + *array2;
        array1++;
        array2++;
    }
    return sumArr;
}


int main() {
    int arr1[] = {1,2,3,4,5}; 
    int arr2[] = {1,2,3,4,5}; 

    int *sum = sumArray(arr1, arr2,5);
    
    for (int i = 0; i < 5; i++) {
        printf("%d-" , sum[i]);
    }
    


               
            
    return 0;
}