#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int number1 = 0;
    int number2 = 0;
    char c = 'a';
    printf("Please enter first number : ");
    scanf("%d", &number1);
    printf("Please enter second number : ");
    scanf("%d", &number2);
    printf("Please write t for sum and please write for c for multiply : ");
    scanf(" %c", &c);

    int (*operation)(int, int);

    if (c == 't')
    {
        operation = sum;
    }
    else if (c == 'c')
    {
        operation = multiply;
    }

    printf("Solution is : %d", operation(number1, number2));
    return 0;
}