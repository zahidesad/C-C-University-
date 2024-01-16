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

int (*functionPointer(int a))()
{
    int (*result)(int,int);
    if(a < 5)
    {
        result = sum;
    }
    else 
    {
        result = avg;
    }
    return result;
}

int main()
{
    printf("%d" , functionPointer(5)(10,6));
    return 0;
}