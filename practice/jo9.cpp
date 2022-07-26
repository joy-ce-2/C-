//swaping
//call by reference using C++ reference variables
#include <iostream>
using namespace std;

int  swapReferenceVariable(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
    return a;
}

int main(){
    int x=3,y=4;
    cout<<"the value of x is "<<x<<". the value of y is "<<y<<endl;
    swapReferenceVariable(x,y);
    cout<<"the value of x is "<<x<<". the value of y is "<<y<<endl;
    return 0;
}