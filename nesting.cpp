#include <iostream>
#include <string>
using namespace std;

// Nesting of member function

class binary
{
    string s;
    void chk_bin(void);

public:
    void read(void);

    void compliment(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
    chk_bin(); // nesting a function in function
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary" << endl;
            exit(0);
        }
    }
}

void binary ::compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    cout << "Compliment of given Binary number is " << endl;
    cout << s << endl;
}

int main()
{
    binary b;
    b.read();
    b.compliment();

    return 0;
}