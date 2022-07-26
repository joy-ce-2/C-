// multilevel inheritance: granfather->father->child
#include <iostream>
using namespace std;
class student
{
protected:
    int roll_num;

public:
    void set_roll_num(int);
    void get_roll_num(void);
};
void student ::set_roll_num(int a)
{
    roll_num = a;
}
void student ::get_roll_num(void)
{
    cout << "the roll number is " << roll_num << endl;
}
class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks();
};
void exam ::set_marks(float m, float p)
{
    maths = m;
    physics = p;
}
void exam ::get_marks(void)
{
    cout << "the marks of roll num " << roll_num << " in maths is " << maths << endl;
    cout << "the marks of roll num " << roll_num << " in physics is " << physics << endl;
};

class result : public exam
{
protected:
    float percentage;

public:
    void display()
    {
        get_roll_num();
        get_marks();
        cout << "your percentage is " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    result joy;
    joy.set_roll_num(21);
    joy.set_marks(95.9, 99.9);
    joy.display();
    return 0;
}