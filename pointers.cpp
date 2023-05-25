#include <iostream>
using namespace std;
int main()
{
    int a = 6;
    int *b = &a;

    // & (address of) operator
    cout << b << endl;
    cout << &a << endl;

    // * (Value at) dereference operator
    cout << *b << endl;

    // Pointer to Pointer
    int **c = &b;
    cout << c << endl;
    cout << &b << endl;
    cout << *c << endl;
    cout << **c << endl;

    return 0;
}