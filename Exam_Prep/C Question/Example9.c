#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *copyString(char *string)
{
    int length = strlen(string);
    char *copy = malloc((length + 1) * sizeof(char));

    for (int i = 0; i < length; i++)
    {
        copy[i] = string[i];
    }
    copy[length] = '\0';
    return copy;
}

int main()
{
    char *originalString = "Zahid Esad";
    char *copiedString = copyString(originalString);

    printf("Original String: %s\n", originalString);
    printf("Copied String: %s\n", copiedString);
}