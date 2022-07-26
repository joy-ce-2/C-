//compiler takes relative func inspite of their same name-->>func overloading
#include <iostream>
using namespace std;

int volume(int r, int h){
    return (3.14*r*r*h);
}
int volume(int a){
    return (a*a*a);
}
int main(){
    cout<<"volume of cylinder is"<<volume(2,3)<<endl;
    cout<<"volume of cube is"<<volume(9);
}