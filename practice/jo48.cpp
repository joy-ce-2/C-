//pointers to objects and arrow operator in cpp
#include <iostream>
using namespace std;
class complex{
    int real, imaginary;
    public:
    void set_data(int a, int b){
        real = a;
        imaginary = b;
    }
    void get_data(){
        cout<<"the real part is "<<real<<endl;
        cout<<"the imaginary part is "<<imaginary<<endl;
    }
};
int main(){
    complex c1;
    // c1.set_data(10,20);
    // c1.get_data();
    complex *ptr = & c1;
    (*ptr).set_data(19,37);
    (*ptr).get_data();
    return 0;
    
}
