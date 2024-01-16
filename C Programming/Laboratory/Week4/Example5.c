#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b){
    return a+b;
}

int substarct(int a, int b){
    return a-b;
}

int multipy(int a, int b){
    return a*b;
}

int divide(int a, int b){
    return a/b;
}

int main() {
    int (*functionPointerArray[]) (int,int)= {sum, substarct,multipy,divide};    
    int numbers[] = {1,2,3,4};
    int length = sizeof(numbers)/sizeof(numbers[0]);

    for (int i = 0; i < length; i++) {       
        printf("i: %d, result : %d\n", i+1, functionPointerArray[i](numbers[i],3));
    }

            
    return 0;
}