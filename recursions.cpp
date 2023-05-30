#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}

// Working of recursion in above function
// fact(4) = 4 * fact(4-1 = 3)
// fact(4) = 4 * 3 * fact(3-1 = 2)
// fact(4) = 4 * 3 * 2 fact(2-1 = 1)
// fact(4) = 4 * 3 * 2 * 1 fact(1-1 = 0) which is 1
// fact(4) = 4 * 3 * 2 * 1 * 1

int fib(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}

int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;

    cout << "Factorial of " << num << " is " << fact(num) << endl;

    int num1;
    cout << "Enter a number" << endl;
    cin >> num1;

    for (int i = 0; i < num1; i++)
    {
        cout << fib(i) << " ";
    }

    return 0;
}