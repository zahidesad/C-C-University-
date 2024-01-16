#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee
{
private:
    int id;
    string firstName;
    string lastName;
    int salary;
    string type;

public:
    Employee(int id, string firstName, string lastName, int salary, string type)
        : id(id), firstName(firstName), lastName(lastName), salary(salary), type(type) {}
    // Getters
    int getId() { return id; }
    string getFirstName() { return firstName; }
    string getLasttName() { return lastName; }
    int getSalary() { return salary; }
    string getType() { return type; }
    // Setters
    void setId(int _id) { id = _id; }
    void setFirstName(string _firstName) { firstName = _firstName; }
    void setLasttName(string _lastName) { lastName = _lastName; }
    void setSalary(int _salary) { salary = _salary; }
    void setType(string _type) { type = _type; }

    void operator+(int increaseAmount)
    {
        this->setSalary(this->getSalary() + increaseAmount);
    }
};

class Manager : public Employee
{
public:
    Manager(int id, string firstName, string lastName, int salary, string type) : Employee(id, firstName, lastName, salary, type) {}
};

class Department
{
public:
    vector<Employee> employees;
    int empCount;
    string name;
    friend void operator==(Department &dept1, Department &dep2);
};

void operator==(Department &dept1, Department &dept2)
{
    for (int i = 0; i < dept1.employees.size(); i++)
    {
        for (int j = 0; j < dept2.employees.size(); j++)
        {
            if (dept1.employees[i].getId() == dept2.employees[j].getId())
            {
                cout << "Same employee name :" << dept1.employees[i].getFirstName() << endl;
            }
        }
    }
}

class Factory
{
public:
    vector<Employee> employees;
    vector<Department> departments;

    void operator+(Employee emp)
    {
        employees.push_back(emp);
    }
    friend void operator+(Factory &f, Department dept);
    friend void operator-(Factory &f, int id);
};

void operator+(Factory &f, Department dept)
{
    f.departments.push_back(dept);
}

void operator-(Factory &factory, int id)
{
    int index = -1;
    for (int i = 0; i < factory.employees.size(); i++)
    {
        if (id == factory.employees[i].getId())
        {
            index = i;
        }
    }

    factory.employees.erase(factory.employees.begin() + (index));
}

int main()
{
    Employee *e1 = new Employee(0, "Zahid", "Esad", 100, "Employee");
    Employee *e2 = new Employee(1, "Sare", "Bayram", 100, "Employee");
    Employee *e3 = new Employee(2, "Rana", "Gungor", 100, "Employee");

    Department d1;
    d1.name = "test";
    d1.employees.push_back(*e1);
    d1.employees.push_back(*e2);
    Department *d2 = new Department();
    d2->employees.push_back(*e1);
    d2->employees.push_back(*e2);
    d2->employees.push_back(*e3);

    Factory *f = new Factory();

    *f + *e1;
    *f + *e2;
    *f + *e3;

    return 0;
}