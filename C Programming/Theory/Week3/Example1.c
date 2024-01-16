#include <stdio.h>
#include <stdlib.h>

int main(void) {

    void *memory1 = malloc(4); // not preffered use
    void *memory2 = malloc(sizeof(int));
    int *i = (int *)memory1;

    *i = 5;

    printf("%d" , *i);


    return 0;
}