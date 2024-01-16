#include <stdio.h>
#include <stdlib.h>

int compareFunctionAddress(int (*function1)(), int (*function2)())
{
    if (function1 == function2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int f1()
{
    printf("f1");
}

int f2()
{
    printf("f2");
}

int main()
{   
    /*int a[] = {1, 2, 3, 4, -1};
    int *p[] = {a, a + 1, a + 2, a + 3, a + 4};

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; *(p + i)[j] != -1; j++)
        {
            sum += *(p + i)[j];
        }
    }

    printf("%d", sum);*/

    if (compareFunctionAddress(f1, f2)) {
        printf("Function pointers's address are the same.\n");
    } else {
        printf("Function pointers's address are different.\n");
    }

    return 0;
}