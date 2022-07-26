#include <iostream>
using namespace std;
int main ()
{

const int m=3;
int v[3]={-1, 5,19};
int max=v[0];
int i;

for (i=0; i<m; i++)
if (max<v[i])
max=v[i];

cout<<"The max value in the arryay is: "<<max<<endl;

cin.get(); cin.get();

return 0;
}