#include <stdio.h>

int myStrlen(char *pointer){
    int length = 0;

    for (int i = 0; i < pointer[i] != '\0'; i++) {
        length++;
    }
    return length;
}


int main() {
    char name[] = "zahid";
    int length = myStrlen(name);
    printf("Length of string : %d" , length);

            
    return 0;
}