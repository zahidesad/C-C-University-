#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr){
    for (int i = 0; i < 5; i++) {
        printf("%d " , arr[i]);      
    }
}


int main() {
    int arr[5] = {1,2,3,4,5};           
    printArray(arr);        
    return 0;
}