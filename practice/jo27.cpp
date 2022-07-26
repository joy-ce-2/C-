#include <iostream>
using namespace std;
class c1;
class c2;
class c1{
    int a;
    public:
    void setval(int v1){
        a = v1;
    }
    void display(){
        cout<<a<<endl;
    }
    friend void swap(c1 &,c2 &);
};
class c2{
    int b;
    public:
    void setval(int v2){
        b = v2;
    }
    void display(){
        cout<<b<<endl;
    }
    friend void swap(c1 &,c2 &);
};
void swap(c1 &o1, c2 &o2){
    int temp = o1.a;
    o1.a = o2.b;
    o2.b = temp;
}
int main(){
    c1 a1;
    c2 a2;
    a1.setval(32);
    a2.setval(23);
    swap(a1,a2);
    cout<<"the value of c1 after swapping ";
    a1.display();
    cout<<"the value of c1 after swapping ";
    a2.display();
    return 0;
}