//OOPs nesting of member functions __ find error

#include <iostream>
#include <string>
using namespace std;

class binary{
    string s;
public:
    void read(void );
    void chk_bin (void);
    void ones_complement(void );
    void display(void);
     
};
void binary :: read(){
    cout<<"enter a binary number:"<<endl;
    cin>>s;
}

void binary :: chk_bin(){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!= '0' && s.at(i)!='1')
        {
            cout<<"incorrect binary format"<<endl;
            exit(0);
        }
    }
}

void binary :: ones_complement(){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
    }
}

void binary :: display(){
    cout<<"displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}
int main(){
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_complement();
    cout<<"after taking ones complement ";
    b.display();
    return 0;
}