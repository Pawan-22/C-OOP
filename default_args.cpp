#include <iostream>
using namespace std;

float fd(int money, float rate = 1.07)
{
    return money * rate;
}

// Inline function ==> Used to reduce function call overhead.(optimisation)
inline int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int money = 100000;
    cout << "Your " << money << " will become " << fd(money) << " after one year" << endl;

    // You can overwrite the default arg value.
    cout << "Your " << money << " will become " << fd(money, 1.04) << " after one year" << endl;
    return 0;
}