//typecasting--->changing one type of data type into another
#include <iostream>

using namespace std;

int main(){
    int a = 7;
    float b = 45.78;
    cout<<"the value of float a is "<<float(a)<<endl;
    cout<<"the value of int b is "<<int(b)<<endl;
    cout<<"the value of bool a is "<<bool(a)<<endl;
    cout<<"the value of char a is "<<char(a)<<endl;
    cout<<(a+int(b))<<endl;
    cout<<(a+(int)b)<<endl;
    cout<<(a+b);
}