// constructor overloading
#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void printnum()
    {
        cout << "your num is " << a << "+" << b << "i"<<endl;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    complex()
    {
        a = 0;
        b = 0;
    }
};
int main()
{
    complex c1;
    c1.printnum();
    complex c2(0, 45);
    c2.printnum();
    complex c3(90);
    c3.printnum();
    return 0;
}