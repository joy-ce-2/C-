//enum
#include <iostream>
using namespace std;

int main(){
    enum meal{breakfast, lunch, dinner};
    meal m1=breakfast;
    meal n1=lunch; 
    meal o1=dinner;
    cout<<m1<<endl;
    cout<<n1<<endl;
    cout<<o1<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl; 
    cout<<dinner<<endl;
    return 0;
}