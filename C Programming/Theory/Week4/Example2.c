#include <stdio.h>
#include <stdlib.h>

int main() {
    int number = 10;
    int *pNumber = &number;                
    int **ppNumber = &pNumber;

    printf("Value of Number : %d\n" , number);
    printf("Value of Pointer Number : %d\n" , *pNumber);
    printf("Value of  Pointer to Pointer Number : %d\n" , **ppNumber);
            
    return 0;
}