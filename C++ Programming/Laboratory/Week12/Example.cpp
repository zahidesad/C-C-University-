#include <iostream>
#include <string>
#include <vector>
using namespace std;


template <typename Base, typename T>
inline bool instanceof(const T *ptr){
    return dynamic_cast<const Base*>(ptr)!=nullptr;
}

class Employee
{
private:
    string firstName;
    string lastName;
    int salary;

public:
    Employee(string firstName, string lastName, int salary)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->salary = salary;
    }

    //Getter methods
    string getFirstName(){return firstName;}
    string getLastName(){return lastName;}
    int getSalary(){return salary;}
    // Setter methods
    void setFirstName(string &newFirstName){firstName = newFirstName;}
    void setLastName(string &newLastName){lastName = newLastName;}
    void setSalary(int newSalary){salary = newSalary;}
};

class Manager : public Employee
{
public:
    Manager(string firstName, string lastName, int salary) : Employee(firstName,lastName,salary){} 
};

class Factory{

private:
    vector<Employee> employees;

public:
    void addEmployee(Employee employee)
    {
        employees.push_back(employee);
    }

    Employee getEmployee(int index)
    {
        return employees.at(index);
    }

    void printEmployeeTypeNumber(){
        int emp_count= 0;
        for(Employee emp : employees){
            if(instanceof<Employee> (&emp)){
                emp_count++;
            }
        }
        cout << "Managers : " << emp_count;
    }
};

int main()
{
    Employee e1("Zahid" , "Baltaci" , 1111);
    Employee e2("Emirhan" , "Soylu" , 2222);
    Manager m1("Ali" , "Nizam" , 9999);
    Factory f1;
    f1.addEmployee(e1);
    f1.addEmployee(e2);
    f1.addEmployee(m1);

    cout << f1.getEmployee(0).getFirstName() << endl;
    f1.printEmployeeTypeNumber();

    return 0;
}