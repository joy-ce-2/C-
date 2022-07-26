#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int); // construction declaration
    void printnum()
    {
        cout << "your complex num is " << a << " + " << b << "i" << endl;
    }
};
complex::complex(int x, int y) // this is parameterized constructor as it takes 2
                               //  parameter
{
    a = x;
    b = y;
}

int main()
{
    complex o(3, 4);
    o.printnum();
    complex p = complex(2, 7);
    p.printnum();
    return 0;
}