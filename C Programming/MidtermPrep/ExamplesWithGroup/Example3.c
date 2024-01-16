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

    int max = (*functionsArray[0])(1, 2);
    for (int i = 0; i < 3; i++)
    {
        int result = functionsArray[i](1, 2);
        if (max < result)
        {
            max = result;
        }
    }
    printf("%d\n", max);
    return 0;
}