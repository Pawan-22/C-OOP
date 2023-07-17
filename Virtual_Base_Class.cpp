#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;

public:
    void setRoll(int r)
    {
        roll = r;
    }
    void showRoll()
    {
        cout << "Roll number is " << roll << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void setMarks(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void showmarks()
    {
        cout << "Maths " << maths << endl;
        cout << "physics " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    int score;

public:
    void setScore(int s)
    {
        score = s;
    }
    void showScore()
    {
        cout << "Score " << score << endl;
    }
};

class Result : public Test, public Sports
{
    float total;

public:
    void display()
    {
        showRoll();
        showmarks();
        total = maths + physics + score;
        cout << "Total " << total << endl;
    }
};

int main()
{
    Result S1;
    S1.setRoll(10);
    S1.setMarks(85.5, 78);
    S1.setScore(8);
    S1.display();
    return 0;
}