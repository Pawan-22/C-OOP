#include <iostream>
using namespace std;

class Complex

{
    int a, b;

public:
    Complex(void); // Constructor declaration

    void printData()
    {
        cout << a << " + " << b << "i" << endl;
    }
};

Complex::Complex(void) // default constructor as it takes no param.
{
    a = 0;
    b = 0;
}

int main()

{

    Complex c;
    c.printData();
    return 0;
}

// Constructor is a special member function of same name as of the class.
// It is used to initialize the objects of its class.
// It is automatically invoked whenever an object is created.

/* Features

 1. It should be declared in public section of a class.
 2. They are automatically invoked whenever an object is created.
 3. They do no have return type, not even void so they cannot return any value.
 4. It can have default arguments.

 */