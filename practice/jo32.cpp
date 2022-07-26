// construction with default arguments
#include <iostream>
using namespace std;
class simple
{
    int a, b, c;

public:
    simple(int x = 1, int y = 89, int z = 9)
    {
        a = x;
        b = y;
        c = z;
    }
    void printnum()
    {
        cout << "the values of a ,b, c are " << a << "," << b << "," << c << " respectively" << endl;
    }
};

int main()
{
    simple c1(0, 9, 3);
    c1.printnum();
    simple c2;
    c2.printnum();
    return 0;
}