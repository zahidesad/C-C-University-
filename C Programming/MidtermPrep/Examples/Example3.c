#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

int (*functionPointer())()
{
    int (*func)(int,int);
    func = sum;
    return func;
}

int main()
{
    printf("%d" , (*functionPointer())(3,5));
    return 0;
}