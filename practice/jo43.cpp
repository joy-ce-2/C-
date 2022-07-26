// ambiguity resolution in inheritance
#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout << "hi" << endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "hello" << endl;
    }
};
class derive : public base1, public base2
{
public:
    void greet()
    {

        base1 ::greet();
    }
    // void greet(){
    //     base2 :: greet();
    // }
};
int main()
{
    derive a;
    a.greet();

    return 0;
}