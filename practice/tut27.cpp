//structure
#include <iostream>
using namespace std;

struct employee
{
    /* data */
    int eID;
    char name;
    float salary;
};

int main(){
    struct employee joyce;
    joyce.eID = 1;
    joyce.name = 'j';
    joyce.salary = 599987653;
    cout<<joyce.eID<<endl;
    cout<<joyce.name<<endl;
    cout<<joyce.salary<<endl;
    return 0;
}