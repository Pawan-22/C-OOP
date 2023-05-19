#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age to check your elgibility for  Driving License!"<<endl;
    cin>>age;

    // if(age<18){
    //     cout<<"Not Eligible";
    // }
    // else if(age==18){
    //     cout<<"Almost there!";
    // }

    // else{
    //     cout<<"You are eligible";
    // }
    
    // ternary operator
    age<18? cout<<"Not elgibile" : cout<<"Elgibile";
    return 0;
}