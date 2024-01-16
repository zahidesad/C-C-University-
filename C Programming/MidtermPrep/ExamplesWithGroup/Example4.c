#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

int avg(int a, int b)
{
    return (a + b) / 2;
}

int (*findMinAddress())(int, int)
{
    int a = 5;
    int b = 10;

    int (*functions[])(int, int) = {sum, avg};
    int min = functions[0](a, b);
    int (*address)(int, int) = functions[0];

    for (int i = 0; i < 2; i++)
    {
        if (min > functions[i](a, b))
        {
            min = functions[i](a, b);
            address = functions[i];
        }
    }

    printf("Address of sum : %d\n", sum);
    printf("Address of avg : %d\n", avg);
    printf("Address of min : %d\n", address);
    return address;
}

int main()
{
    printf("%d", (findMinAddress())(5, 10));
    return 0;
}