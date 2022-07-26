//recursions
#include <iostream>

using namespace std;

//n!=n*(n-1)!
int factorial(int n){
    if (n<2){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }