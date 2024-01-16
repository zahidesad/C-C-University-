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

int (*findMinimumAddress())(int, int)
{
    int (*functionsArray[])(int, int) = {add, substract, multiply};
    int min = (*functionsArray[0])(3, 5);
    int (*address)(int, int) = functionsArray[0];

    for (int i = 0; i < 3; i++)
    {
        if (functionsArray[i](3, 5) < min)
        {
            min = functionsArray[i](3, 5);
            address = functionsArray[i];
        }
    }
    printf("Address of sum : %d\n", add);
    printf("Address of avg : %d\n", substract);
    printf("Address of avg : %d\n", multiply);
    printf("Address of min : %d\n", address);
    return address;
}

int main()
{
    printf("%d", (findMinimumAddress())(3, 5));
    return 0;
}