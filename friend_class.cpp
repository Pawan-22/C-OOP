#include <iostream>
using namespace std;

// Forward Declaration
class Complex;

class Calc
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;

    // Individually declaring functions as friends
    // friend int Calc ::sumRealComplex(Complex o1, Complex o2);
    // friend int Calc ::sumCompComplex(Complex o1, Complex o2);

    // Declaring entire class Calc as friend
    friend class Calc;

public:
    void
    setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Number is a " << a << " + " << b << "i" << endl;
    }
};

int Calc::sumRealComplex(Complex o1, Complex o2)
{
    return o1.a + o2.a;
}

int Calc::sumCompComplex(Complex o1, Complex o2)
{
    return o1.b + o2.b;
}

int main()
{
    Complex o1, o2;
    o1.setNumber(4, 6);
    o1.printNumber();

    o2.setNumber(2, 2);
    o2.printNumber();

    Calc c1;
    int res = c1.sumRealComplex(o1, o2);
    cout << "Result of real part is " << res << endl;

    int res2 = c1.sumCompComplex(o1, o2);
    cout << "Result of complex part is " << res2 << endl;

    return 0;
}