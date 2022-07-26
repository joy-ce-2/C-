//initialization list in constructor
#include <iostream>
using namespace std;
class test{
    int a;
    int b;
    public :
    
    // test(int i, int j) : a(i),b(j)
    // test(int i, int j) : a(i),b(i+j)
    // test(int i, int j) : a(i),b(a+i)
    test(int i, int j) : a(i),b(a*33)
    {
    cout<<a<<endl<<b<<endl;
    }

};
int main(){
    test (4,6);
    return 0;
}