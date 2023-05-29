#include <iostream>
using namespace std;

// syntax type functionName(args) // function protoype
int sum(int a, int b); // function declaration / prototype

int main()
{
    int Num1, Num2, result;
    cout << "Enter Num1" << endl;
    cin >> Num1;
    cout << "Enter Num2" << endl;
    cin >> Num2;

    // Num1 & NUm2 are actual param
    result = sum(Num1, Num2); // Function call

    cout << result << endl;

    return 0;
}

int sum(int a, int b) // function definition
{
    // a & b are args.(formal param)
    return a + b;
}