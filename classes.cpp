#include <iostream>
using namespace std;

class Box
{

public:
    double length;
    double breadth;
    double height;
};

int main()
{

    Box box1; // declaration of box1 of type Box
    Box box2;
    double volume;

    // box1 specs
    box1.length = 5.0;
    box1.breadth = 6.0;
    box1.height = 7.0;

    // box2 specs
    box2.length = 10.0;
    box2.breadth = 12.0;
    box2.height = 13.0;

    volume = box1.length * box1.breadth * box1.height;
    cout << "Volume of box1 is " << volume << endl;

    volume = box2.length * box2.breadth * box2.height;
    cout << "Volume of box2 is " << volume << endl;

    return 0;
}