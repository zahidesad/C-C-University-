#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

void copyWithMemcpy(char *dest[], char *src[], int count)
{
    for (int i = 0; i < count; i++)
    {
        dest[i] = malloc(strlen(src[i]) + 1);
        memcpy(dest[i], src[i], strlen(src[i]) + 1);
    }
}

void copyWithoutMemcpy(char *dest[], char *src[], int count)
{
    for (int i = 0; i < count; i++)
    {
        dest[i] = malloc(strlen(src[i]) + 1);
        strcpy(dest[i], src[i]);
    }
}

void printStrings(char *strings[], int count)
{
    for (int i = 0; i < count; ++i)
    {
        printf("%s ", strings[i]);
    }
    printf("\n");
}

void freeStrings(char *strings[], int count)
{
    for (int i = 0; i < count; ++i)
    {
        free(strings[i]);
    }
}

int main()
{
    char *source[] = {"Hello", "World", "!"};

    int count = sizeof(source) / sizeof(source[0]);

    char *destination_with_memcpy[MAX];
    char *destination_without_memcpy[MAX];

    copyWithMemcpy(destination_with_memcpy, source, count);
    
    printf("Original array of strings:\n");
    printStrings(source, count);

    printf("Copy with memcpy:\n");
    printStrings(destination_with_memcpy, count);
    freeStrings(destination_with_memcpy, count);

    copyWithoutMemcpy(destination_without_memcpy, source, count);
    printf("Copy without memcpy:\n");
    printStrings(destination_without_memcpy, count);
    freeStrings(destination_without_memcpy, count);

    return 0;
}
