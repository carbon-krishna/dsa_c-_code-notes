#include <iostream>
using namespace std;
class Add
{
public:
      // x,y, two int addn
      int sum(int x,int y)
      {
        cout<<"sum of 2 int :- ";
        return x+y;
      }
      int sum(int x,int y,int z)
      {
        cout<<"sum of 3 int :- ";
        return x+y+z;
      }
      // double add
      double sum(double x,double y)
      {
        cout<<"sum of 2 double :- ";
        return x+y;
      }
};
class Complex
{
public:
       float real;
       float imag;
       Complex()
       {
        real=imag=-1.0;
       }
       Complex(float r,float i):real(r),imag(i){};

      // syntax of operator overloading
      //  return_type operator <op> (args){
      //   //xyzabc
      //   return<>
      //  }

       Complex operator+(const Complex&B){
        Complex temp;
        temp.real= this->real + B.real;
        temp.imag= this->imag + B.imag;
        return temp;
       }

       void print()
       {
        printf("[%.2f + i%.2f]\n",this->real,this->imag);
       }

       Complex operator-(const Complex&B){
        Complex temp;
        temp.real = this->real - B.real;
        temp.imag = this->imag - B.imag;
        return temp;
       }
       bool operator==(const Complex&B){
        return(this->real==B.real && this->imag==B.imag);
       }
};
int main(){
    // int x=5,y=2,z=3;
    // Add a;
    // cout<<a.sum(x,y)<<endl;
    // cout<<a.sum(x,y,z)<<endl;
    // cout<<a.sum(1.2,2.5)<<endl;
    Complex A(2,5);
    A.print();
    Complex B(3,3);
    B.print();
    Complex C = A + B;
    C.print();
    Complex D = A - B;
    D.print();
    bool a = A==B;
    cout<<a;
    return 0;
}