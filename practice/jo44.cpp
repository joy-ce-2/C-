// VIRTUAL BASE CLASS
#include <iostream>
using namespace std;
// class C : virtual A{};
class student
{
protected:
    int roll_num;

public:
    void set_roll_num(int rn)
    {
        roll_num = rn;
    }
    void display_rn(void)
    {
        cout << "your roll number is " << roll_num << endl;
    }
};
class test : virtual public student
{
protected:
    int maths, physics;

public:
    void set_marks(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void display_marks(void)
    {
        cout << "your marks in maths is " << maths << endl
             << ". Your marks in physics is " << physics << endl;
    }
};
class sports : virtual public student
{
protected:
    float score;

public:
    void set_score(float s)
    {
        score = s;
    }
    void display_score()
    {
        cout << "your score in sports is " << score << endl;
    }
};
class result : public test, public sports
{
    float total;

public:
    void display_result()
    {
        total = maths + physics + score;
        display_marks();
        display_score();
        cout << "your result is " << (total / 210) * 100 << "%";
    }
};
int main()
{
    result joy;
    joy.set_roll_num(21);
    joy.display_rn();
    joy.set_marks(100, 100);
    joy.set_score(10);
    joy.display_result();

    return 0;
}