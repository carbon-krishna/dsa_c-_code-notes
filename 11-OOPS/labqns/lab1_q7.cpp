#include <iostream>
#include <string>
using namespace std;
class Complex
{
    float r1,i1,r2,i2;
public:
    Complex(){
        cout<<"complex default ctor called :- "<<endl;
        r1=0;
        i1=0;
        r2=0;
        i2=0;
    }
    void set(float real1,float img1,float real2,float img2){
        this->r1=real1;
        this->i1=img1;
        this->r2=real2;
        this->i2=img2;
    }
    void display(){
        cout<<"complex no.1 is :- " <<r1<<"+"<<i1<<"i"<<endl;
        cout<<"complex no.2 is :- " <<r2<<"+"<<i2<<"i"<<endl;
    }
    void sum(){
        cout<<"sum is :- "<<r1+r2<<"+"<<i1+i2<<"i"<<endl;
    }
    ~Complex(){
        cout<<"Complex dtor called "<<endl;
    }
};
int main(){
    Complex c1;
    c1.set(10,20,30,40);
    c1.display();
    c1.sum();
    return 0;
}