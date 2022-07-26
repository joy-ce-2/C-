//Passing objects as Function arguments
#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void sumcomplex(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void displaycomplex()
    {
        cout << "the complex no. is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setdata(1, 2);
    c1.displaycomplex();

    c2.setdata(3, 4);
    c2.displaycomplex();

    c3.sumcomplex(c1, c2);
    c3.displaycomplex();
    return 0;
}