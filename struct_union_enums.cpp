#include <iostream>
using namespace std;

struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
};

typedef struct brawlStar
{
    /* data */
    int rank;
    char name;
    float power;
} bs;

// Union

union money
{
    int rice;
    char car;
    float pounds;
};

int main()
{
    struct employee Pawan;
    struct employee Jiten;
    Pawan.eId = 100;
    Pawan.favChar = 'P';
    Pawan.salary = 200000;

    Jiten.eId = 101;
    Jiten.favChar = 'A';
    Jiten.salary = 120000;

    cout << Pawan.salary << endl;
    cout << Pawan.eId << endl;

    cout << Jiten.favChar << endl;
    cout << Jiten.eId << endl;

    bs Edgar;
    Edgar.name = 'E';
    Edgar.rank = 10;
    Edgar.power = 100.5;

    cout << Edgar.name << endl;

    union money m1;
    m1.rice = 25;
    m1.car = 'R';
    cout << m1.rice << endl; // will return garbage value bc of union. Only one member can be accessed at a time.
    cout << m1.car << endl;

    // Enum

    enum Gender
    {
        Male,
        Female
    }; // Defining enum gender

    Gender pawan = Male; // Creating gender type variable

    cout << pawan << endl;

    return 0;
}