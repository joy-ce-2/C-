#include <iostream>

using namespace std;

int main(){
    int divident,divisor,remainder;
    long double quotient;
    cout<<"enter the divident:";
    cin>>divident;
    cout<<"enter the divisor:";
    cin>>divisor;
    quotient=divident/divisor;
    remainder=divident-divisor/quotient;
    cout<<remainder;
    return 0;
}