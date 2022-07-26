//prime number not completed yet
#include <iostream>

using namespace std;
int primenum(int n){
    if((n%1==0) && (n%n==0)){
        cout<<n<<" is prime number";
    }
    else{
        cout<<n<<" is not a prime number";
    }
}

int main(){
    int a;
    cout <<"enter number:";
    cin>>a;
    primenum(a);
    return 0;
}