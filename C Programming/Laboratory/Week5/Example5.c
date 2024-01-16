#include <stdio.h>
#include <stdlib.h>
#define ABS(x) (x < 0 ? -x : x) 
#define MAX(a,b) (a > b ? a : b)

int main() {
    int num1 = -5;
    int num2 = 10;

    int abs_num1 = ABS(num1);
    int abs_num2 = ABS(num2);

    int max_value = MAX(num1, num2);

    printf("Absolute value of %d is %d\n", num1, abs_num1);
    printf("Absolute value of %d is %d\n", num2, abs_num2);
    printf("Maximum value between %d and %d is %d\n", num1, num2, max_value);
            
    return 0;
}