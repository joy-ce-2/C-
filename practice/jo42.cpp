#include <iostream>
#include <math.h>
using namespace std;
class simpleCal{
    protected:
    int a ;
    int b;
    public:
    void setsimp(int num1,int num2){
        a = num1;
        b = num2;
    }
    int sum(){
        return a+b;
    }
    int subtraction(){
        return a-b;
    }
    int product(){
        return a*b;
    }
    int division(){
        return a/b;
    }
    void display(){
        cout<<"the two nums are "<<a<<" and "<<b<<endl;
        cout<<"the sum of two nums is "<<sum()<<endl;
        cout<<"the subtraction of two nums is "<<subtraction()<<endl;
        cout<<"the product of two nums is "<<product()<<endl;
        cout<<"the division of two nums is "<<division()<<endl;
    }
};
class scientificCal{
    protected:
    float a ;
    float b;
    public:
    scientificCal(){};
    void setsci(float num1,float num2){
        a = num1;
        b = num2;
    }
    float power(){
        return pow(a,b);
    }
    float cosine(){
        return cos(a);
    }
    float sine_b(){
        return sin(b);
    }
    float tangent_a(){
        return tan(a);
    }
    void show(){
        cout<<"the two nums are "<<a<<" and "<<b<<endl;
        cout<<"the value of "<<a<<" to the power "<<b<<" is "<<power()<<endl;
        cout<<"the cosine of "<<a<<" and "<<b<<" is "<<cosine()<<endl;
        cout<<"the sine of "<<b<<" is "<<sine_b()<<endl;
        cout<<"the tangent of "<<a<<" is "<<tangent_a()<<endl;
    }
};
class hybridCal : public simpleCal , public scientificCal {

};

int main(){
// simpleCal a;
// a.setsimp(10,2);
// a.display();
// scientificCal b;
// b.setsci(45,30);
// b.show();
    hybridCal a;
    a.setsimp(10,2);
    a.display();
    a.setsci(30,40);
    a.show();

    return 0;
}
/* multiple inheritance
   public mode*/