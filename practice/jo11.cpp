//rectangle
#include <iostream>
using namespace std;

int main(){
    int row,column;
    cout<<"enter column:";
    cin>>column;
    cout<<"enter row:";
    cin>>row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column ; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}