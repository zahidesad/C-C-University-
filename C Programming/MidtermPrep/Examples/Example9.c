#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{

    return a + b;
}

int substract(int a, int b)
{

    return a - b;
}

int multiply(int a, int b)
{

    return a * b;
}

int makeOperations(int a, int b, int (*function)(int, int))
{
    return function(a, b);
}

int main()
{
    int a = 5;
    int b = 10;

    printf("Sum : %d\n", makeOperations(a, b, sum));
    return 0;
}