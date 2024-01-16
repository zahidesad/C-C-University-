#include <stdio.h>
#include <stdlib.h>

typedef struct Employee
{
    char *name;
    char *surname;
    int salary;
    void (*zamYap)(struct Employee *);
} Employee;

void zamYap(Employee *self)
{
    self->salary *= 1.1;
}

int main()
{
    Employee emp1 = {.name = "Zahid", .surname = "Baltaci", .salary = 1100, .zamYap = zamYap};
    emp1.zamYap(&emp1);
    printf("%d", emp1.salary);
    return 0;
}