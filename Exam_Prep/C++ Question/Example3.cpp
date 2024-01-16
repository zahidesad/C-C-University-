#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person
{
public:
    virtual void print()
    {
        cout << "Person" << endl;
    }
};

class Student : public Person
{
public:
    void print()
    {
        cout << "Student" << endl;
    }
};


int main()
{
    Student *s1 = new Student;
    Person *p1 = s1;

    p1->print();
    return 0;
}