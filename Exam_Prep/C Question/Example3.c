#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
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

int main()
{
    int (*functionsArray[])(int, int) = {add, substract, multiply};
    int max = (*functionsArray[0])(3, 5);
    for (int i = 0; i < 3; i++)
    {
        if ((*functionsArray[i])(3, 5) > max)
        {
            max = (*functionsArray[i])(3, 5);
        }
    }
    printf("%d\n", max);
    return 0;
}