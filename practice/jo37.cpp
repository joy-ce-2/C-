// inheritance
#include <iostream>
using namespace std;
class employee
{ // base class
public:
    int id;
    float salary;
    employee(int inpid)
    {
        id = inpid;
        salary = 1;
    }
    employee() {}
};
/*derived class syntax:
 class {{derived class name}} : {{visibility mode}} {{base class name}}
{
    class member,methods ,etc
};
******************NOTES*******************:
1.default visibility mode is private
2.private visibility mode: public members of base class becomes private
member of derived class.
2.public visibility mode: public members of base class becomes public
member of derived class.
3.private members are never inherited.
*/
class programmer : public employee
{
public:
    programmer(int inpid)
    {
        id = inpid;
    }
    int languagecode = 10;
    void getid()
    {
        cout << id << endl;
    }
};

int main()
{
    employee joyce(2);
    cout << joyce.salary << endl;
    cout << joyce.id << endl;
    programmer skilf(1);
    cout << skilf.languagecode << endl;
    cout << skilf.salary << endl;
    cout << skilf.id << endl;
    skilf.getid();
    return 0;
}
// if we state a cout statement in deriver program which invoke a program that itself has a
// cout statement then compiler giver error saying no operator << matches these operands