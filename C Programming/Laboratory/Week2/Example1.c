#include <stdio.h>

int main() {
    int i= 1;
    float f = 1.3;
    double d = 4.5;

    printf("%d\n" , sizeof(i+f));
    printf("%d\n" , sizeof(i+d));
    printf("%d\n" , sizeof(f+d));
    printf("%d" , sizeof(i+f+d));
    

            
    return 0;
}