#include <stdio.h>
#include <stdlib.h>

int main() {
    char *names[] = {"Ahmet", "Mehmet", "Emirhan"};

    int total = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; names[i][j] != '\0'; j++) {
            total++;       
        }
    }            
    printf("%d", total);        
    return 0;
}