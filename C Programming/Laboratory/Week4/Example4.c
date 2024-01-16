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

int makeOperations(int a, int b, int (*operation)(int,int)){
    return operation(a,b);
    
}


int main() {
    int a = 5;
    int b = 10;

    printf("Sum : %d\n" , makeOperations(a,b,sum));
            
    return 0;
}