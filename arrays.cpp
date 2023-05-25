#include <iostream>
using namespace std;
int main()
{
    int marks[] = {45, 65, 78, 25};
    cout << marks[2] << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << marks[i] << endl;
    }

    // Pointers

    int *p = marks;
    cout << "The value of marks[0] is " << *p << endl;
    cout << "The value of marks[1] is " << *(p + 1) << endl;
    return 0;
}