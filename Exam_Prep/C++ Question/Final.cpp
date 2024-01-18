#include <iostream>
#include <vector>
using namespace std;

class Factory;
class Employee
{
public:
    Employee(int id, string name, int salary) : id(id), name(name), salary(salary) {}
    int id;
    string name;
    int salary;
    friend double calculateRatio(Factory f, Employee emp);
};

class Factory
{
public:
    vector<Employee> employees;
    friend double calculateRatio(Factory f, Employee emp);
    void operator-(Employee emp)
    {
        for (int i = 0; i < employees.size(); i++)
        {
            if (employees[i].id == emp.id && employees[i].name == emp.name)
            {
                employees.erase(employees.begin() + i);
            }
        }
    }
};

double calculateRatio(Factory f, Employee emp)
{
    double totalSalary;
    for (Employee employee : f.employees)
    {
        totalSalary += employee.salary;
    }
    double ratio = emp.salary / totalSalary;
    return ratio;
}

int main()
{
    Employee emp1(0, "Zahid", 100);
    Employee emp2(1, "Sare", 200);
    Employee emp3(2, "Rana", 300);
    Employee emp4(2, "Emirhan", 400);
    Employee emp5(2, "Asim", 500);

    Factory f;
    f.employees.push_back(emp1);
    f.employees.push_back(emp2);
    f.employees.push_back(emp3);
    f.employees.push_back(emp4);
    f.employees.push_back(emp5);

    f - emp3;

    for (Employee employee : f.employees)
    {
        cout << employee.name << endl;
    }

    double ratio = calculateRatio(f,emp1);
    cout << ratio <<endl;
}