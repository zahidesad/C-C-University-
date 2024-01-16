#include <stdio.h>
#include <stdlib.h>

typedef struct Student
{
    char *name;
    int no;
} Student;

int main()
{

    Student s1 = {.name = "Ahmet", .no = 123};
    Student s2 = {.name = "Mehmet", .no = 124};
    Student s3 = {.name = "Ali", .no = 125};

    FILE *file = fopen("students.bin", "wb");

    fwrite(&s1, sizeof(Student), 1, file);
    fwrite(&s2, sizeof(Student), 1, file);
    fwrite(&s3, sizeof(Student), 1, file);
    fclose(file);
    
    Student *sp1 = malloc(sizeof(Student));
    Student *sp2 = malloc(sizeof(Student));
    Student *sp3 = malloc(sizeof(Student));

    FILE *file1 = fopen("students.bin", "rb");

    fread(sp1, sizeof(Student), 1, file1);
    fread(sp2, sizeof(Student), 1, file1);
    fread(sp3, sizeof(Student), 1, file1);

    fclose(file);
    printf("%s,  %s,  %s, ", sp1->name, sp2->name, sp3->name);
    return 0;
}