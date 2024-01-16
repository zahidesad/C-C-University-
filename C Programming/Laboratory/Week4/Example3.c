#include <stdio.h>
#include <stdlib.h>

int findSum (int num1, int num2){
    return num1 + num2;   
} 


int main() {
    int a = 5;
    int b = 7;
    int (*findSumPtr)(int,int) ;
    findSumPtr = findSum;

    printf("The sum of %d and %d is %d\n", a, b, findSumPtr(a,b));

 


            
    return 0;
}