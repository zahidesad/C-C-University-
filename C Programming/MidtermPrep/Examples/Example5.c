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

int (*compareFunctionAddress())(int , int)
{
    int (*functions[])(int, int) = {sum, avg};
    int a = 5;
    int b = 15;
    int min = (*functions[0])(a, b);
    int (*result)(int,int) = functions[0];
    for (int i = 0; i < 2; i++)
    {
        if (min > (*functions[i])(a, b))
        {
            min = (*functions[i])(a,b);
            result = functions[i];
        }
    }   
    return result;
}

int main()
{
    

    printf("Addres of Sum : %d\n" , sum);
    printf("Addres of Avg : %d\n" , avg);
    printf("Addres of Result : %d\n" , compareFunctionAddress());

    return 0;
}