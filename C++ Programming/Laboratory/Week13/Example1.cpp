#include <iostream>
#include <vector>
using namespace std;

class Employee
{
private:
    string firstName;
    string lastName;
    int salary;
    string type;

public:
    Employee(const string &first, const string &last, int sal, const string &empType)
        : firstName(first), lastName(last), salary(sal), type(empType) {}

    Employee operator+(int increaseAmount)
    {

        this->setSalary(increaseAmount + this->getSalary());
        return *this;
    }

    // Getter and Setter for firstName
    string getFirstName() const
    {
        return firstName;
    }

    void setFirstName(const string &newFirstName)
    {
        firstName = newFirstName;
    }

    // Getter and Setter for lastName
    string getLastName() const
    {
        return lastName;
    }

    void setLastName(const string &newLastName)
    {
        lastName = newLastName;
    }

    // Getter and Setter for salary
    int getSalary() const
    {
        return salary;
    }

    void setSalary(int newSalary)
    {
        salary = newSalary;
    }

    // Getter and Setter for type
    string getType() const
    {
        return type;
    }

    void setType(const std::string &newType)
    {
        type = newType;
    }
};

class Manager : public Employee
{
public:
    Manager(const string &first, const string &last, int sal, const string &empType) : Employee(first, last, sal, empType) {}
};

class Department
{
public:
    vector<Employee> employees;
    int totalEmployeesNo = 0;

    void addEmployee(Employee emp)
    {
        employees.push_back(emp);
        totalEmployeesNo++;
    }
};

class Factory
{
public:
    vector<Employee> employees;
    Department departments[10];
    int departmentCount = 0;

    void addEmployee(Employee emp)
    {
        employees.push_back(emp);
    }

    vector<Employee> getEmployees() const
    {
        return employees;
    }

    void operator+(const Employee &newEmployee)
    {
        this->employees.push_back(newEmployee);
    }

    void operator+(const Department &newDepartment)
    {

        this->departments[departmentCount] = newDepartment;
        departmentCount++;
    }
};

int main()
{
    Employee emp1("Zahid", "Baltaci", 10, "Ogrenci");
    Factory f;

    f + emp1;
    cout << f.employees[0].getFirstName() << endl;
    emp1 + 100;
    cout << emp1.getSalary() << endl;
    Department d;
    d.addEmployee(emp1);

    f + d;
    cout << f.departments[0].totalEmployeesNo << endl;
    return 0;
}