#include <iostream>
using namespace std;

// Base class
class Employee
{

public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 12000.00;
    }
    Employee() {}
};

// Derived class
class Programmer : public Employee
{
public:
    int langCode = 5;
    Programmer(int inpId)
    {
        id = inpId;
    }
};

int main()
{
    Employee e1(1), e2(2);
    cout << e1.salary << endl;
    cout << e2.salary << endl;

    Programmer p1(3);
    cout << p1.langCode << endl;
    cout << p1.id << endl;

    return 0;
}