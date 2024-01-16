#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE 0

int main() {
    if (TRUE) {
        printf("TRUE is redefined to be %d\n", TRUE);
    } else {
        printf("TRUE is redefined to be %d\n", TRUE);
    }

    if (FALSE) {
        printf("FALSE is redefined to be %d\n", FALSE);
    } else {
        printf("FALSE is redefined to be %d\n", FALSE);
    }

            
    return 0;
}