#include <stdio.h>
#include <stdlib.h>

int main() {
    char string_array[100];

    printf("Please enter a string : ");
    scanf("%s" , string_array);

    char *string_pointer = string_array;

    int length = 0;

    for (int i = 0;  string_pointer[i] !='\0'; i++) {
        length++;
    }

    printf("Length of array : %d ", length );
     
            
    return 0;
}

