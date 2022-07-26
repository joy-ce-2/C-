// DESTRUCTOR
#include <iostream>
using namespace std;
int count = 0; //it has to be globally declared
class num
{

public:
    num()
    {
        count++;
        cout << "constructor has been called for object number " << count << endl;
        cout<<count<<endl;
    }
    ~num()
    {
        cout << "destructor has been called for object number " << count << endl;
        count--;
        cout<<count<<endl;
    }   
};
int main()
{
    num n1;
    {
        num n2, n3;
    }
    return 0;
}