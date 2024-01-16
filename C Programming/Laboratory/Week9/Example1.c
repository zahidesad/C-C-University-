#include <stdio.h>
#include <stdlib.h>

int myStrlen(char *string)
{
    int length = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        length++;
    }
    return length;
}


int main() {
    char *name = "Zahid Esad";
    printf("%d" , myStrlen(name));

            
    return 0;
}