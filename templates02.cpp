#include <iostream>
using namespace std;

template <typename T>
T minFunc(T x, T y)
{
    return x > y ? y : x;
}

int main()
{
    cout << minFunc<int>(5, 10) << endl;
    cout << minFunc<float>(5.6, 2.3) << endl;
    cout << minFunc<char>('g', 'e') << endl;
    return 0;
}