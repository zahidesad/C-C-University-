#include <iostream>
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
    Employee(int _id, string _firstName, string _lastName, int _salary, string _type)
        : id(_id), firstName(_firstName), lastName(_lastName), salary(_salary), type(_type) {}
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
    // Question 2 decleration
    friend void operator+(Employee &emp, int increaseSalary);
};

// Question 2 body
void operator+(Employee &emp, int increaseSalary)
{
    emp.salary += increaseSalary;
}

class Manager : public Employee
{
public:
    Manager(int _id, string _firstName, string _lastName, int _salary, string _type)
        : Employee(_id, _firstName, _lastName, _salary, _type) {}
};

class Department
{
public:
    string name;
    vector<Employee> employees;
    int employeeCount;
    friend void operator==(Department &department1, Department department2);
};

// Question 6 body
void operator==(Department &department1, Department department2)
{
    for (Employee employee : department1.employees)
    {
        for (Employee emp_dept2 : department2.employees)
        {
            if (employee.getId() == emp_dept2.getId())
            {
                cout << "Same Employee Name : " << employee.getFirstName() << endl;
            }
        }
    }
}

class Factory
{
public:
    vector<Employee> employees;
    vector<Department> departments;
    // Question 1
    void addEmployee(Employee emp)
    {
        employees.push_back(emp);
    }
    // Question 3 declaration
    friend void operator+(Factory &factory, Employee emp);
    // Question 4 declaration
    friend void operator+(Factory &factory, Department department);
    // Question 5 declaration
    friend void operator-(Factory &factory, Employee employee);
};

// Question 3 body
void operator+(Factory &factory, Employee emp)
{
    factory.addEmployee(emp);
}

// Question 4 body
void operator+(Factory &factory, Department department)
{
    factory.departments.push_back(department);
}

// Question 5 body
void operator-(Factory &factory, Employee employee)
{
    for (int i = 0; i < factory.employees.size(); i++)
    {
        if (employee.getId() == factory.employees[i].getId())
        {
            factory.employees.erase(factory.employees.begin() + i);
        }
    }
}

int main()
{
    Employee emp1(0, "Zahid", "Baltaci", 100, "Employee");
    Employee emp2(1, "Sare", "Bayram", 200, "Employee");
    Employee emp3(2, "Rana", "Gungor", 300, "Employee");
    // Test for the question 2
    emp1 + 500;
    cout << emp1.getSalary() << endl;
    // Test for the question 3
    Factory factory;
    factory + emp1;
    factory + emp2;
    factory + emp3;
    for (Employee emp : factory.employees)
    {
        cout << emp.getFirstName() << endl;
    }
    // Test for the question 4
    Department d1;
    d1.name = "Test 1";
    d1.employees.push_back(emp1);
    d1.employees.push_back(emp2);
    d1.employees.push_back(emp3);
    Department d2;
    d2.name = "Test 2";
    factory + d1;
    factory + d2;
    d2.employees.push_back(emp1);
    d2.employees.push_back(emp2);

    for (Department dept : factory.departments)
    {
        cout << dept.name << endl;
    }
    // Test for the question 5
    factory - emp1;
    for (Employee emp : factory.employees)
    {
        cout << emp.getFirstName() << endl;
    }
    // Test for the question 5
    d1 == d2;

    return 0;
}