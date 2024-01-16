#include <stdio.h>
#include <stdlib.h>

int sum (int a , int b)
{
    return a+b;
}


int main()
{
    int (*pSum)(int,int) = sum;
    printf("%d" , pSum(1,2));
    return 0;
}