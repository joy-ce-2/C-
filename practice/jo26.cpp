#include <iostream>
using namespace std;
class y;
class x{
    int data;
    public:
        void setvalue(int value){
               data = value;
        }
    friend void add( x,y);
};
class y{
    int num;
    public:
        void setvalue(int value){
               num = value;
        }
    friend void add( x,y);
};
void add(x o1, y o2){
    cout<<"the sum two num is "<<o1.data + o2.num;
}
int main(){
    x a1;
    y a2;
    a1.setvalue(4);
    a2.setvalue(99);
    add(a1,a2);

    return 0;
}