#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Writing to a file
    ofstream out("sample01.txt");
    cout << "Enter name" << endl;

    string name;
    cin >> name;
    out << name;
    out.close(); // Closing file

    // Reading a file
    ifstream in("sample01.txt");
    string st;
    in >> st;
    cout << st << endl;
    in.close();
    return 0;
}