//revisiting pointers: new and delete keywords in C++   
#include <iostream>
using namespace std;
int main(){
    //basic example
    int a = 4;
    int *ptr = &a;
    cout<<"the value of a is "<<*(ptr)<<endl;
    
    //new operator
    float *p = new float(40);
    cout<<"the value at address p is "<<*(p)<<endl;

    int *arr = new int [3]; //new makes object with not actual name
    arr[0] = 10;
    // arr[1] = 10;
    *(arr + 1) = 20;
    arr[2] = 30;

    // delete[] arr;

    cout<<"the value at arr[0] is "<<arr[0]<<endl;
    cout<<"the value at arr[1] is "<<arr[1]<<endl;
    cout<<"the value at arr[2] is "<<arr[2]<<endl;
    
    return 0;
}