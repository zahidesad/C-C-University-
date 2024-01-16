#include <stdio.h>
#include <stdlib.h>

typedef struct Student
{
    int no;
    char *name;
} Student;

int main()
{
    printf("Do you want to enter student information? (Enter 'n' for yes, 'q' for quit): ");

    char choice;
    scanf(" %c", &choice);

    while (choice != 'q')
    {
        if (choice == 'n')
        {
            Student *student = (Student *)malloc(sizeof(Student));

            printf("Enter student number: ");
            scanf("%d", &(student->no));

            student->name = (char *)malloc(100);
            printf("Enter student name: ");
            scanf("%s", student->name);

            printf("Student Number: %d, Name: %s\n", student->no, student->name);

            free(student->name);
            free(student);
        }
        else
        {
            printf("Invalid choice. Please enter 'n' to enter student information or 'q' to quit.\n");
        }

        printf("Do you want to enter student information? (Enter 'n' for yes, 'q' for quit): ");
        scanf(" %c", &choice);
    }

    printf("Goodbye :)\n");
    return 0;
}