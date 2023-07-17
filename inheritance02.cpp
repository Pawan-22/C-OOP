#include <iostream>
using namespace std;

// Base class
class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student::set_roll_number(int r)
{
    roll_number = r;
}

void Student::get_roll_number()
{
    cout << roll_number << endl;
}

// Derived class1
class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks();
};

void Exam::set_marks(float m, float p)
{
    maths = m;
    physics = p;
}

void Exam::get_marks()
{
    cout << "Maths " << maths << endl;
    cout << "Physics " << physics << endl;
}

// Derived class from class1
class Result : public Exam
{

    float percentage;

public:
    void display()
    {
        get_roll_number();
        get_marks();
        cout << "Percentage is " << (maths + physics) / 2 << endl;
    }
};
int main()
{
    Result s1;
    s1.set_roll_number(10);
    s1.set_marks(67.5, 86);
    s1.display();
    return 0;
}