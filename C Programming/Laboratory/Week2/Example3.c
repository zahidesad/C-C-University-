#include <stdio.h>
#include <stdbool.h>

int countOfTrue(bool variable){
    static int countOfTrue;

    if (variable == 1)
    {
        countOfTrue++;
    }
    

    return countOfTrue;
}


int main() {
    countOfTrue(1);
    countOfTrue(0);
    countOfTrue(1);
    countOfTrue(1);

    printf("True count = %d" ,countOfTrue(1));
            
    return 0;
}