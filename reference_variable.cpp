#include <iostream>
using namespace std;

int a = 50; // a in global scope

int main()
{
    int a = 5;
    cout << "The value of a is "<<a<<endl;

    // to print global a;
    cout<<"The value of global variable a is "<<::a<<endl;

    // reference variable
    float x = 25;
    float &y = x;
    cout<<x<<endl;
    cout<<y<<endl;

    // Typecasting (coversion from one type to another)
    int q = 20;
    float p = 3.14;
    cout<<"Value of q is "<<(float)q<<endl;
    cout<<"Value of p is "<<(int)p<<endl;

    cout<<"q + p "<<q+p<<endl;
    cout<<"q + (int)p "<<q+(int)p<<endl;

    return 0;
}