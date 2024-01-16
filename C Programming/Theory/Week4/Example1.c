#include <stdio.h>
#include <stdlib.h>

void function(int *pointer){
    *pointer = 5;

}

int main() {
    int number = 10;
    function(&number);
    printf("Number : %d\n" , number);            
            
    return 0;
}