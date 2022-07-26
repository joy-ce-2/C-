#include <iostream>
using namespace std;

int main(){
    int row,column;
    cout<<"enter number of rows:";
    cin>>row;
    cout<<"enter number of column:";
    cin>>column;
    for (int i = 1; i <= row; i++){
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}