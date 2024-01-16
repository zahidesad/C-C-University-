#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p = (int *)malloc(sizeof(int));             


    printf("Addres of pointer : %d\n" ,p);            
    printf("Value of pointer : %d\n" ,*p);            
    return 0;
}