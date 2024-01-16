#include <stdio.h>
#include <stdlib.h>

int main() {
    int numbers[] = {1,2,3,4,5};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    int *pNumbers= numbers;

    
    for (int i = 0; i < length; i++) {
        (*pNumbers)++;
        pNumbers++;    
    }        

    for (int i = 0; i < length; i++) {
        printf("%d \n", numbers[i]);
    }              
            
    return 0;
}