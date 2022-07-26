//fabonacci series 1,1,2,3,5,8,13.........
#include <iostream>

using namespace std;

int fabo(int a){
    if (a<=1){
        return 1;
    }
    return fabo(a-1) + fabo(a-2);
}

int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    cout<<"the "<<n<<"th term of fabonacci series is "<<fabo(n);
    return 0;
}
