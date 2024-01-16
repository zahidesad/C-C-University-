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
    // Question 2
    void operator+(int increaseSalary)
    {
        /*int newSalary = salary + increaseSalary;
        salary = newSalary;*/
        salary += increaseSalary;
    }
};

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
    //Question 6 
    void operator==(Department department)
    {
        for (Employee employee : employees)
        {
            for (Employee deptEmployee : department.employees)
            {
                if (employee.getId() == deptEmployee.getId())
                {
                    cout << "Same Employee Name : " << employee.getFirstName() << endl;
                }
            }
        }
    }
};

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
    // Question 3
    void operator+(Employee emp)
    {
        addEmployee(emp);
    }
    // Question 4
    void operator+(Department department)
    {
        departments.push_back(department);
    }
    // Question 5
    void operator-(Employee emp)
    {
        int index = 0;
        for (Employee employee : employees)
        {
            if (employee.getId() == emp.getId())
            {
                break;
            }
            index++;
        }
        employees.erase(employees.begin() + index);
    }
};

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
    cout << factory.employees[0].getFirstName() << endl;
    // Test for the question 4
    Department department1;
    department1.name = "Test Departmani";
    department1.employees.push_back(emp1);
    department1.employees.push_back(emp2);
    factory + department1;
    cout << factory.departments[0].name << endl;
    // Test for the question 5
    factory - emp3;
    for (int i = 0; i < factory.employees.size(); i++)
    {
        cout << factory.employees[i].getFirstName() << endl;
    }
    // Test for the question 6
    Department department2;
    department2.employees.push_back(emp1);
    department2.employees.push_back(emp2);
    department2.employees.push_back(emp3);
    department1 == department2;

    return 0;
}