#include <iostream>
using namespace std;

void swap(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a , b;
    cout<<"enter first no.'a'"<<endl;
    cin>>a;
    cout<<"enter first no.'b'"<<endl;
    cin>>b;
    swap(a,b);
    cout<<"the value of a after swapping is "<<a<<endl;
    cout<<"the value of b after swapping is "<<b<<endl;
    return 0;
}