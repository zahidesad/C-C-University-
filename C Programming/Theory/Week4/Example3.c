#include <stdio.h>
#include <stdlib.h>

int main() {
    int numbers[] = {1,2,3};
    int *pNumbers[] = {numbers,numbers+1,numbers+2};

    printf("First element of array : %d\n", *pNumbers[0]);            
    printf("Second element of array : %d\n", *pNumbers[1]);            
    printf("Third element of array : %d\n", *pNumbers[2]);  

    int **ppNumbers = pNumbers;          
    printf("First element of array (Pointer to pointer) : %d\n", **ppNumbers);
            
    return 0;
}