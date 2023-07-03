#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter Id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of employee is " << id << " Employee count is " << count << endl;
    }

    // static function
    static void getCount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};

// count is static data member of class Employee
int Employee ::count; // default value is 0

int main()
{
    Employee Pawan, E1;
    Pawan.setData();
    Pawan.getData();
    Employee::getCount();

    E1.setData();
    E1.getData();
    Employee::getCount();

    return 0;
}