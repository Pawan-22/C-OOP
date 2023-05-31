#include <iostream>
using namespace std;

class Employee
{
private:
    int salary;
    int address;

public:
    string eName;
    int eNum;
    void setData(string name, int cellNumber); // function declaration
    void getData()
    {
        cout << "The name of employee is " << eName << endl;
        cout << "The cell of employee is " << eNum << endl;
    };
};

void Employee ::setData(string name, int cellNumber) // function definition
{
    eName = name;
    eNum = cellNumber;
}

int main()
{
    Employee Pawan;
    Pawan.setData("Pawan", 123456789);
    Pawan.getData();

    Employee MissWednesday;
    MissWednesday.setData("Wednesday", 1023156418);
    MissWednesday.getData();
    return 0;
}