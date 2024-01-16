#include <stdio.h>

int main() {

    char string_array[100];

    printf("Please enter a string : ");
    scanf("%s" , string_array);

    char *string_pointer = string_array;

    while (*string_pointer != '\0') {
        if ((int)*string_pointer >= 97 && (int)*string_pointer <= 122){
            *string_pointer -= 32;
            string_pointer++;
        }
           
    }

     printf("%s", string_array);

}
