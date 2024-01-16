#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fileName[100];

    printf("Enter the name of the file to be opened: ");
    scanf("%s", fileName);
    char chunk[200];
    FILE *file = fopen(fileName, "r");
    if (file != NULL)
    {
        fscanf(file, "%s", chunk);
        fclose(file);
        printf("%s",chunk);
    }
    else
    {
        printf("File null");
        return 1;
    }

    return 0;
}