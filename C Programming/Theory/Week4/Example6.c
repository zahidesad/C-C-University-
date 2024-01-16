#include <stdio.h>
#include <stdlib.h>

int squareFunction(int a){
    return a*a;
}

int doubleFunction(int a){
    return 2*a;
}

int main() {
    int (*functionPointerArray[]) (int a)= {squareFunction,doubleFunction};     

    for (int i = 0; i < sizeof(functionPointerArray)/sizeof(functionPointerArray[0]); i++) {
        printf("%d. calculation = %d\n", i+1 , functionPointerArray[i](5));
    }     
    
            
    return 0;
}
