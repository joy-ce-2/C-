#include <iostream>

using namespace std;

void main(){
    cout<<"test"<<endl;
    int age;
    cout<<"enter your age:";
    cin>>age;
    if(age<18){
        cout<<"not allowed";
    }
    else if(age == 18){
        cout<<"kid pass";
    }
    else if(age<0){
        cout<<"you are not yet born";
    }
    else{
        cout<<"allowed";
    }
}
