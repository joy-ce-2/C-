//float and long double
#include <iostream>

using namespace std;

int main(){
    float d= 34.5;
    long double e=34.5;
    cout<<"the size of 34.5 is "<<sizeof(34.5)<<endl;
    cout<<"the size of 34.5f is "<<sizeof(34.5f)<<endl;
    cout<<"the size of 34.5l is "<<sizeof(34.5l)<<endl;
    cout<<"the size of 34.5L is "<<sizeof(34.5L)<<endl;
    cout<<"the size of 34.5F is "<<sizeof(34.5F)<<endl;
    
    cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e;

    return 0;
}
