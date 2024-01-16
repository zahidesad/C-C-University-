#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void removeLineWithTemp(char *filename, int lineNumber)
{
    FILE *file = fopen(filename, "r");
    FILE *temp = fopen("temp.txt", "w");

    int line = 0;
    char chunk[200];
    while (fgets(chunk, sizeof(chunk), file) != NULL)
    {
        line++;
        if (line == lineNumber)
        {
            continue;
        }
        else
        {
            fprintf(temp,"%s",chunk);
        }
    }
    fclose(file);
    fclose(temp);

    remove("user_input.txt");
    rename("temp.txt","user_input.txt");
}

void removeLineWithoutTemp(char *filename, int lineNumber)
{
    
}


int main()
{
    removeLineWithTemp("user_input.txt",3);
    return 0;
}