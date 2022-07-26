//global local

#include<iostream>

using namespace std;

int c = 45;

int main(){
    
    int a,b,c;
    
    cout<<"enter the first number:"<<endl;
    cin>>a;

    cout<<"enter the second number:"<<endl;
    cin>>b;

    c = (a+b);
    cout<<"the sum of two number is:"<<c<<endl;
    cout<<"the value of global c is:"<<::c; //:: is scope resolution operator
    return 0;
}