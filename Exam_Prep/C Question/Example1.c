#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Course
{
    char *coursName;
} Course;

typedef struct Student
{
    char *name;
    Course courses[10];
} Student;

typedef struct Department
{
    char *name;
    Student *students;
    void (*displayStudentName)(struct Department *);
} Department;

void displayNameOfStudent(Department dept, char *coursName)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (dept.students[i].courses[j].coursName == coursName)
            {
                printf("Name of students : %s\n", dept.students[i].name);
            }
        }
    }
}

void displayStudentName(Department *self)
{
    for (int i = 0; i < 4; i++)
    {
        printf("Name of student : %s\n", self->students[i].name);
    }
}

int main()
{
    Department *dept = malloc(sizeof(Department));
    dept->name = "Engineering";

    Course course = {.coursName = "Cp3"};
    Student student1 = {.name = "Zahid", .courses[0] = course};
    Student student2 = {.name = "Sare", .courses[0] = course};
    Student student3 = {.name = "Rana", .courses[0] = course};
    Student student4 = {.name = "Emirhan", .courses[0] = course};

    dept->students = malloc(4 * sizeof(Student));
    dept->students[0] = student1;
    dept->students[1] = student2;
    dept->students[2] = student3;
    dept->students[3] = student4;
    displayNameOfStudent(*dept, "Cp3");
    dept->displayStudentName = displayStudentName;
    dept->displayStudentName(dept);
    return 0;
}