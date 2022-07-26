//multiple inheritance-->> ek bacche ke do baap
#include <iostream>
using namespace std;
class base1
{
protected:
    int base1int;

public:
    void setbase1int(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void setbase2int(int a)
    {
        base2int = a;
    }
};
class derive : public base1, public base2
{
public:
    void show()
    {
        cout << "the value of base 1 is " << base1int<<endl;
        cout << "the value of base 2 is " << base2int<<endl;
        cout << "the sum of bases is " << base1int + base2int;
    }
};

int main()
{
    derive joy;
    joy.setbase1int(99);
    joy.setbase2int(1);
    joy.show();
    return 0;
}
