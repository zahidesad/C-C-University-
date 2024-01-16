#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

int (*returnFunc())()
{
    int (*func)(int, int);
    func = sum;
    return func;
}

int main()
{
    printf("%d", (returnFunc())(5, 4));
    return 0;
}