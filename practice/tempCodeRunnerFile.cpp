//selection control structure: switch
#include <iostream>

using namespace std;

int main(){
    int age;
    cout<<"enter age";
    cin>>age;
    switch (age)
    {
    case 18 :
        cout<<"you are 18";
        break;
    case 22 :
        cout<<"you are 22";
        break;
    case 2 :
        cout<<"you are 2";
        break;
    
    default:
    cout<<"no special case";
        break;
    }
    return 0;
}