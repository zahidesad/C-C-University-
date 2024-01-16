#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *copyString(char *string)
{
    int stringLength = strlen(string);
    char *copy = malloc((stringLength + 1) * sizeof(char));

    for (int i = 0; i < stringLength; ++i)
    {
        copy[i] = string[i];
    }
    copy[stringLength] = '\0';
    return copy;
}

int main()
{
    char *originalString = "Hello, World";
    char *copiedString = copyString(originalString);

    printf("Original String: %s\n", originalString);
    printf("Copied String: %s\n", copiedString);

    free(copiedString);

    return 0;
}