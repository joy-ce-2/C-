//selection control structure : switch case statements
#include <iostream>

using namespace std;

int main(){
    int age;
    cout<<"enter age"<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"you are 18";
        break;
    case 22:
        cout<<"you are 22";
        break;
    
    default :
        cout<<"you are not born";
        break;
    }
    return 0;
}