#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

int substarct(int a, int b)
{
    return a - b;
}

int multipy(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int main()
{
    int (*functions[])(int, int) = {sum, substarct, multipy, divide};
    int numbers[] = {1,2,3,4};
    for (int i = 0; i < 4; i++) {       
        printf("i: %d, result : %d\n", i+1, functions[i](numbers[i],3));
    }
    return 0;
}