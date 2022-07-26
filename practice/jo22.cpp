// arrays of object
#include <iostream>
using namespace std;
class employee
{
    int id;
    int salary;

public:
    void setdata()
    {
        salary = 20000;
        cout << "enter the id of the employee: ";
        cin >> id;
    }
    void getdata()
    {
        cout << "the salary of the employee is " << salary << endl;
        cout << "the id of the employee is " << id << endl;
    }
};
int main()
{
    employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setdata();
        fb[i].getdata();
    }

    return 0;
}