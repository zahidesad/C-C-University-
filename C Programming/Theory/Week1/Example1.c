#include <stdio.h>

int main()
{
    int age = 5;
    printf("Size of int : %d\n" , sizeof(age));
    printf ("Please enter your age :");
    scanf("%d" ,&age);
    printf("%d", age);

    return 0;
}
