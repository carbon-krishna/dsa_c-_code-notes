#include <iostream>
using namespace std;
class abc{
private:
     mutable int x;
     const int z;
     int *y;
public:
    //  abc()
    //  {
    //     x=0;
    //     y=new int(0);
    //     z=0;
    //  }
    // old style ctor
    //  abc(int _x,int _y,int _z=0) // int_z=0 is default argument
    //  {
    //     x = _x;
    //     y = new int(_y);
    //     z = _z;
    //  }

    // new method ctor
    // intialization list
    abc(int _x,int _y,int _z=0):x(_x),y(new int(_y)),z(_z){
        cout<<"in init list"<<endl;
        *y=*y*10;
    }
     void setX(int _val)
     {
        x=_val;
     }
     void setY(int _val)
     {
        *y=_val;
     }
     int getX() const
     {
        return x;
     }
     int getY() const
     {
        return *y;
     }
     int getZ() const
     {
        return z;
     }
     };
     void print(const abc &a)
     {
        cout<< a.getX()<<" "<< a.getY()<<" "<< a.getZ()<<endl;
     }
int main(){
    abc a(1,2,3);
    print(a);
    a.setX(20); // thanks to mutable keyword
    print(a);
    return 0;
}
int main2(){
    const int x = 5; // x is constant
    // intialization can be done but we cant reassign a new value
    // cout<<x<<endl;
    // x=10;
    // 2.Const with pointers
    const int *a = new int(2); //constant data non-constant pointer
    // int const *a = new int(2); // same as line no 9
    cout<<*a<<endl;
    // *a = 2;
    cout<<*a<<endl;
    int b = 5;
    a = &b; //pointer itself can be reassigned
    cout<<*a<<endl;
    //CONST POINTER non-constant data
    int *const c = new int(4);
    cout<<*c<<endl;
    *c=28;
    cout<<*c<<endl;
    return 0;
}