//selection control structure:if else-if else ladder
#include <iostream>

using namespace std;

int main(){
    int age;
    cout<<"enter age";
    cin>>age;
    if(age<18){
        cout<<"not allowed";
    }
    else if(age==18){
        cout<<"with kid pass";
    }
    else if(age<0){
        cout<<"you are not yet born";
    }
    else{
        cout<<"allowed";
    }
    return 0;
}