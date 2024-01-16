#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char userInput[1000];
    printf("Please enter a text:");
    gets(userInput);

    FILE *file = fopen("..\\user_input.txt", "w");
    if (file != NULL)
    {
        fprintf(file, "%s", userInput);
        fclose(file);
    }
    else
    {
        printf("Error opening file for writing\n");
        return 1;
    }

    return 0;
}