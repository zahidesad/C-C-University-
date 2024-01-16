#include <stdio.h>
#include <stdlib.h>

int f1(){
    printf("f1 is called\n");
}

int f2(){
    printf("f2 is called\n");
}

int main() {
    int (*pFunction)();         

    pFunction = &f1;
    pFunction();
    pFunction = &f2;
    pFunction();
    (*pFunction)();    
            
    return 0;
}