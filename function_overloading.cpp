#include <iostream>
using namespace std;

// function overloading ==> functions having same name but diff parameters.

// volume of cube
int volume(int s)
{
    return (s * s * s);
}

// volume of cylinder
int volume(int r, int h)
{
    return (3.14 * r * r * h);
}

int main()
{
    cout << "The volume of cube is " << volume(10) << endl;
    cout << "The volume of cylinder is " << volume(5, 10) << endl;
    return 0;
}