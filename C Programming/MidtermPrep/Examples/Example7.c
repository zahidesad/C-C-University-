#include <stdio.h>
#include <stdlib.h>

void swapAddress(int **p1, int **p2)
{
    int *temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int a = 5;
    int b = 10;
    int *p1 = &a;
    int *p2 = &b;

    printf("Addres of p1 before swap : %d\n", p1);
    printf("Addres of p2 before swap : %d\n", p2);

    swapAddress(&p1, &p2);
    printf("Addres of p1 after swap : %d\n", p1);
    printf("Addres of p2 after swap : %d\n", p2);

    return 0;
}