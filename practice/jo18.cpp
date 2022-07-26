//Classes,public //and private access modifiers

#include<iostream>
using namespace std;

class employee{
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int a1,int b1,int c1);
    void getdata(){
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
    cout<<"the value of c is "<<c<<endl;
    cout<<"the value of d is "<<d<<endl;
    cout<<"the value of e is "<<e<<endl;
}
};


int main(){
    employee joyce;
    //joyce.a=53;//it gives error because a is private
    joyce.d=79;
    joyce.e=425;
    joyce.setdata(1,2,3);
    joyce.getdata();
    return 0;
}