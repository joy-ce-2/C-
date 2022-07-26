// memory allocation & using arrays in classes
#include <iostream>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void) { counter = 1; }
    void setprice();
    void displayprice();
};
void shop ::setprice(void)
{
    cout << "enter id of your item no. " << counter << endl;
    cin >> itemid[counter];
    cout << "enter price of your item no. " << counter << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop ::displayprice()
{
    for (int i = 1; i <= counter; i++)
    {
        cout << "the price of the item of id " << itemid[i] << " is " << itemprice[i] << endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.displayprice();
    return 0;
}