#include <stdio.h>
#include <stdlib.h>

int main() {
    int *var1;
    int *var2;

    var1 = malloc(sizeof(int));
    var2 = malloc(sizeof(int));

    for (int *i = var1; i < var2+10; i++) {
        printf("Address : %d / Value : %d \n" , i, *i );
    }            
            
    return 0;
}