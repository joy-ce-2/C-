// constructors in derived class
#include <iostream>
using namespace std;
class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "base 1 ka const " << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "base 2 ka const " << endl;
    }
};
class derived : public base1,virtual public base2
{
    int der1, der2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        der1 = c;
        der2 = d;
        cout << "derived class constructor called!!!";
    }
};
int main()
{
    derived joy(2, 34, 5, 6);
}