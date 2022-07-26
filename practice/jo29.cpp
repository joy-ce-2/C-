// Constructors in C++
#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(void); // construction declaration
    void printnum()
    {
        cout << "your complex num is " << a << " + " << b << "i" << endl;
    }
};
complex::complex(void) // this is default construction as it takes no
                       //  parameter
{
    a = 0;
    b = 0;
}

int main()
{
    complex c1, c2, c3;
    c1.printnum();
    c2.printnum();
    c3.printnum();
    return 0;
}
/**************properties of constructors**********
constructor is a special member function with the same name as of the class.
it is used to intialize the objects of its class
1.it should be declared in the public section of the class.
2.the are automatically invoked whenever the object is created
3.they cannot return values and do not have return types.
4.it can have default arguments
5.we cannot refer to their address
*/