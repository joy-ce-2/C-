// Friend functions
#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void setcomplex(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void displaycomplex()
    {
        cout << "your complex no. is " << a << " + " << b << "i." << endl;
    }
    friend complex sumcomplex(complex o1, complex o2);
};
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setcomplex((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setcomplex(1, 2);
    c1.displaycomplex();

    c2.setcomplex(3, 4);
    c2.displaycomplex();

    // sum.sumcomplex(c1,c2);  //complex has no member "sumcomplex"
    cout<<"the sum of ";
    sum = sumcomplex(c1, c2);
    sum.displaycomplex();
    return 0;
}
/*properties of friend dunction
1. not in the scope of class
2. since it is not in the scope of the class ,it cannot be called from the
   object of the class. c1.sumcomplex() == error
3. can be invoke without the help of any object
4. ususally contains obect as arguments.
5. can be declared inside private or public part of the class.
6. it cannot access the members directly by their names and need
   obect_name.member_name to access any member.
*/