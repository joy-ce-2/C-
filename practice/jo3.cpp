//functions and function prototypes
#include <iostream>

using namespace std;
int sum(int ,int);   //function prototype means to use only this syntax
void g();            //so that the func does'nt gives error of func not
int main(){          //declared in this scope.
    int num1 ,num2;
    cout<<"enter first number:"<<endl;
    cin>>num1;
    cout<<"enter second number:"<<endl;
    cin>>num2;
    cout<<"sum is "<<sum(num1 ,num2)<<endl;
    g();
    return 0;
}
int sum(int a,int b){
    int c = a+b;// a and b are formal parameter and num1 num2 are actual 
                //parameters.
    return c;
}
void g(){
    cout<<"thamkyou";
}
