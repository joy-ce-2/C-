// COPY CONSTRUCTOR
#include <iostream>
using namespace std;
class simple
{
    int a;

public:
    simple()
    {
        a = 0;
    }
    simple(int number)
    {
        a = number;
    }
    simple(simple &obj)
    {
        cout << "copy constructor called!!!" << endl;
        a = obj.a;
    }
    // when copy constructor is not defined then complier supplies its own copy constructor
    void display()
    {
        cout << "the number of this obect is " << a << endl;
    }
};
int main()
{
    simple x(11), y, z(99), z2;
    // x.display();
    // y.display();
    // z.display();
    simple z1(z);//user define copy constructor invoke
    z1.display();
    cout<<endl;


    z2 = x;
    z2.display();//user define copy constructor is not invoke
    cout<<endl;

    simple z3(z);
    z3.display();//user define copy constructor invoke
    cout<<endl;

    return 0;
}