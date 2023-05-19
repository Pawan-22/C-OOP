#include <iostream>
using namespace std;

int main()
{
    // for loop
    for(int i = 0; i<=10;i++){
        cout<<i<<endl;
    }

    // while loop
    int a = 1;
    while(a <= 10){
        cout<<a*3<<endl;
        a++;
    }

    // do-while (will execute atleast once)
    int i = 0;
    do {
    cout << i << "\n";
    i++;
    }
    while (i <= 5);
    
    return 0;
}