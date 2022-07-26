//friend class ,member friend class
#include <iostream>
using namespace std;

class complex; // forward declaration

class cal
{
public:
    int sum(int a, int b)
    {
        return (a + b);
    }

    int sumreal(complex, complex); // declaration
    int sumimg(complex, complex);
};

class complex
{
    int a, b;
    // friend int cal ::sumreal(complex, complex);
    // friend int cal ::sumimg(complex, complex);
    // aliter:
    friend class cal;

public:
    void setcomplex(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printcomplex()
    {
        cout << "your complex num is " << a << " + " << b << "i" << endl;
    }
};
int cal ::sumreal(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int cal ::sumimg(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2, sum;
    o1.setcomplex(5, 6);
    o2.setcomplex(9, 2);
    cal s1;
    int res = s1.sumreal(o1, o2);
    cout << "the sum of real part of o1 and o2 is " << res << endl;
    int resc = s1.sumimg(o1, o2);
    cout << "the sum of imaginary part of o1 and o2 is " << resc << endl;
    return 0;
}