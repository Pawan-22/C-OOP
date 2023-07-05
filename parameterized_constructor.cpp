#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int); // Constructor declaration
    void printNumber()
    {
        cout << a << " + " << b << 'i' << endl;
    }
};

Complex::Complex(int x, int y) // parameterized constructor as it takes arguments
{
    a = x;
    b = y;
}

int main()
{
    Complex c(2, 3); // Implicit call
    c.printNumber();

    Complex b = Complex(5, 7); // Explicit call
    b.printNumber();
    return 0;
}