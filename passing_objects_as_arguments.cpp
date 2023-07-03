#include <iostream>
using namespace std;

// making array of objects
class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 1000;
        cout << "Enter Id of Employee " << endl;
        cin >> id;
    }

    void getId(void)
    {
        cout << "Id of employee is " << id << endl;
    }
};

// passing objects as argument in a function
class complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setDataBySum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printNumber()
    {
        cout << "Complex number is " << a << "+" << b << "i" << endl;
    }
};

int main()
{
    // Employee e1, e2, e3;

    // Employee fb[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     fb[i].setId();
    //     fb[i].getId();
    // }
    complex c1, c2, c3;
    c1.setData(2, 2);
    c1.printNumber();
    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();

    return 0;
}