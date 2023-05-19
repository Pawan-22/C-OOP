// Manipulators are predefined functions thast help in formatting output.

#include<iostream>
#include<iomanip> // header file for manipulators
using namespace std;

int main(){
    const int a = 10;
    const float pi = 3.14;

    cout<<"Value of a is "<<a<<endl; // endl is also a manipulator
    cout<<"Value of b is "<<pi<<endl;
    
    // Manipulators
    cout<<"Value of a is "<<setw(4)<<a<<endl; // setw => set width.
    cout<<"Value of b is "<<setw(4)<<pi<<endl;

    
}