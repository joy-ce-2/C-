//static data members
#include <iostream>
using namespace std;

class employee
{
    int id;
    // int count =0; every object takes count =0
    static int count;

public:
    void setdata()
    {
        cout << "enter id:" << endl;
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "the id of this employee is " << id << "and this is employee number " << count << endl;
    }
    static void getcount()
    {
        cout << "the value of count is " << count << endl;
        // cout<<id; throws error because id is not static
    }
};
int employee ::count = 1000; // default value 0
int main()
{
    employee joyce, kirti, kanti;
    joyce.setdata();
    joyce.getdata();
    employee::getcount();

    kirti.setdata();
    kirti.getdata();
    employee::getcount();

    kanti.setdata();
    kanti.getdata();
    employee::getcount();
    return 0;
}