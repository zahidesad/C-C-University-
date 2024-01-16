#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *dynamicString = "Fatih Sultan Mehmet";

    printf("%s\n", dynamicString);
    int wordCount = 0 ;
    char *words[3];
    char word = malloc(sizeof(char)* 21);
    for (int i = 0; i < strlen(dynamicString); i++) {
        word = dynamicString[i]; 
        if(dynamicString[i] == ' ')
        {
            words[wordCount] = word;
            char word = malloc(sizeof(char) * 21);
        }
    }

    return 0;
}