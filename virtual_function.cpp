#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "This is Base class" << endl;
    }
};

class Derived : public Base
{
    void show()
    {
        cout << "This is Derived Class" << endl;
    }
};

int main()
{
    Base *bptr;
    Derived d;
    bptr = &d;
    bptr->show();
    return 0;
}