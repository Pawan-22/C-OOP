#include <iostream>
using namespace std;

// call by reference
void swap(int *a, int *b);

// call by reference using c++ reference variable
void swap1(int &x, int &y);

int main()
{
    int a = 7, b = 25;
    int c = 10, d = 20;

    swap(&a, &b);
    swap1(c, d);

    cout << "a is " << a << endl;
    cout << "b is " << b << endl;
    cout << "c is " << c << endl;
    cout << "d is " << d << endl;

    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap1(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}