//swaping
//call by value
#include <iostream>
using namespace std;

int sum(int a,int b){
    int c= a+b;
    return c;
}
//this will not swap a and b
int swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}

//call by reference using pointers
int swapPointer(int*a , int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main (){
    int a=1,b=2;
    cout<<"the value of a is "<<a<<". the value of b is "<<b<<endl;
    //swap(a,b);//this will not swap a and b
    swapPointer(&a,&b);
    cout<<"the value of a is "<<a<<". the value of b is "<<b<<endl;

    return 0;
}