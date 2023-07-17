#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int i)
    {
        base1int = i;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int i)
    {
        base2int = i;
    }
};

class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The value of Base1 is " << base1int << endl;
        cout << "The value of Base2 is " << base2int << endl;
    }
};

int main()
{
    Derived d;
    d.set_base1int(10);
    d.set_base2int(20);
    d.show();

    return 0;
}