#include <stdio.h>
#include <stdlib.h>

void swapAddress(int **ptr1, int **ptr2){
    int *temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

}


int main() {
    int a = 5;
    int b = 10;
    int *ptrA = &a;
    int *ptrB = &b;


    printf("Before swap:\n");
    printf("ptrA points to: %d\n", ptrA);
    printf("ptrB points to: %d\n", ptrB);

    swapAddress(&ptrA, &ptrB);

    printf("After swap:\n");
    printf("ptrA points to: %d\n", ptrA);
    printf("ptrB points to: %d\n", ptrB);
            
    return 0;
}