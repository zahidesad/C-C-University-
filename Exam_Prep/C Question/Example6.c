#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Person
{
    char *name;
    char *surname;
} Person;

int main()
{

    Person p1 = {.name = "Zahid", .surname = "Baltaci"};
    Person p2 = {.name = "Sare", .surname = "Bayram"};
    Person p3 = {.name = "Rana", .surname = "Gungor"};
    Person p4 = {.name = "Emirhan", .surname = "Soylu"};
    Person people[4] = {p1, p2, p3, p4};

    // Write txt file
    FILE *file = fopen("names.txt", "w");
    for (int i = 0; i < 4; i++)
    {
        fprintf(file, "%s %s\n", people[i].name, people[i].surname);
    }
    fclose(file);
    // Write binary file
    FILE *fileBinary = fopen("names.bin", "wb");
    for (int i = 0; i < 4; i++)
    {
        fwrite(&people[i], sizeof(Person), 1, fileBinary);
    }
    fclose(fileBinary);
    // Read binary file
    FILE *fileBinaryRead = fopen("names.bin", "rb");
    Person *read_person = malloc(sizeof(Person));
    int randomIndex = 2;
    int personCount = 0;
    while (fread(read_person, sizeof(Person), 1, fileBinaryRead) != 0)
    {
        if (personCount == randomIndex)
        {
            printf("%s %s", read_person->name, read_person->surname);
        }
        personCount++;
    }
    fclose(fileBinaryRead);

    return 0;
}