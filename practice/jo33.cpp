#include <iostream>
using namespace std;
class bank
{
    int principal;
    int year;
    float interestRate;
    int returnVal;

public:
    bank() {}
    bank(int p, int y, float r);
    bank(int p, int y, int r);
    void show()
    {
        cout << "the pricipal amount is " << principal << ". the return value after " << year << " years is " << returnVal << endl;
    }
};
bank::bank(int p, int y, float r)
{
    principal = p;
    year = y;
    interestRate = r;
    returnVal = principal;
    for (int i = 0; i < year; i++)
    {
        returnVal = returnVal * (1 + interestRate);
    }
}
bank::bank(int p, int y, int r)
{
    principal = p;
    year = y;
    interestRate = float(r) / 100;
    returnVal = principal;
    for (int i = 0; i < year; i++)
    {
        returnVal = returnVal * (1 + interestRate);
    }
}

int main()
{
    bank b1, b2, b3;
    int p, y, R;
    float r;
    cout << "enter the value of p,y, float r" << endl;
    cin >> p >> y >> r;
    b1 = bank(p, y, r);
    b1.show();

    cout << "enter the value of p,y,int R" << endl;
    cin >> p >> y >> R;
    b2 = bank(p, y, R);
    b2.show();

    return 0;
}