#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Person
{
    char *name;
    char *surname;
} Person;

static int personCount = 0;

void addPersonToArray(Person *array, Person person)
{
    personCount++;
    array = realloc(array, personCount * sizeof(Person));

    array[personCount - 1] = person;
}

int main()
{
    Person *people = malloc(sizeof(Person));
    Person p1 = {.name = "Zahid", .surname = "Baltaci"};
    addPersonToArray(people, p1);
    Person p2 = {.name = "Sare", .surname = "Bayram"};
    addPersonToArray(people, p2);
    Person p3 = {.name = "Rana", .surname = "Gungor"};
    addPersonToArray(people, p3);
    Person p4 = {.name = "Emirhan", .surname = "Soylu"};
    addPersonToArray(people, p4);
    Person p5 = {.name = "Asim", .surname = "Kutluer"};
    addPersonToArray(people, p5);

    // Write the txtFile
    FILE *txtFile = fopen("names.txt", "w");
    for (int i = 0; i < personCount; i++)
    {
        fprintf(txtFile, "%s %s\n", people[i].name, people[i].surname);
    }
    fclose(txtFile);
    // Write the binary file
    FILE *binaryFile = fopen("names.bin", "wb");
    for (int i = 0; i < personCount; i++)
    {
        fwrite(&people[i], sizeof(Person), 1, binaryFile);
    }
    fclose(binaryFile);
    // Read the binary file
    FILE *binaryFileRead = fopen("names.bin", "rb");
    Person *readPerson = malloc(sizeof(Person));
    int i = 0;
    while (fread(readPerson, sizeof(Person), 1, binaryFileRead) != 0)
    {
        printf("%d) %s %s\n", (i + 1), readPerson->name, readPerson->surname);
        i++;
    }
    fclose(binaryFileRead);
    return 0;
}