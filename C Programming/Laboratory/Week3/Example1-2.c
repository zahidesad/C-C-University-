#include <stdio.h>  
#include <stdlib.h>

int main() {
    int *pointer;
    int a = 5;
    pointer = &a;

     
    void *genericPointer = malloc(sizeof(int));    
    int *intPointer = (int *)genericPointer;
    *intPointer = 42;

    printf("Addres of pointer %d \n" , pointer);
    printf("Value of pointer : %d \n" , *pointer);            
    printf("Value of generic pointer : %d \n" , *intPointer);
    printf("Addres of pointer %d \n" , genericPointer);
    printf("Addres of pointer %d \n" , intPointer);
            
    return 0;
}