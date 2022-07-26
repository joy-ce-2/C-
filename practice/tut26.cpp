//pointer arithmetic -> 
//address new(p+i)=address current(p) + i * size of(data type)
#include <iostream>
using namespace std;

int main(){
    int marks[]={1,2,3,4,5,9};
    int* p= marks;
    cout<<"the value of marks[0] is "<<*p<<endl;
    cout<<"the value of marks[0] is "<<*(p+1)<<endl;
    cout<<"the value of marks[0] is "<<*(p+2)<<endl;
    cout<<"the value of marks[0] is "<<*(p+3)<<endl;

}