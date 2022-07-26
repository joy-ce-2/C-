//protected acess modifier 
#include <iostream>
using namespace std;

class base{
    protected:
        int a;
    private:
        int b;
};
class derived : protected base{};
/*            pulically derived   privately derived   protectively derived
                
1.private      not inherited       not inherited        not inherited
2.public       public              private              protected
3.protected    protected           private              protected
*/
int main(){
    base b;
    derived obj;
    return 0;
}