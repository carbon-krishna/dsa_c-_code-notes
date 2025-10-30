#include <iostream>
using namespace std;
class Triangle
{
float base;
float height;
public:
static int count;

public:
    Triangle(float _b,float _h){
        this->base=_b;
        this->height=_h;
        count++;
    }
    double area(){
        return this->height*this->base;
    }
    static Triangle compareArea(Triangle &t1, Triangle &t2)
    {
        if(t1.area()>t2.area()){
            return t1;
        }
        // else if(t2.area()>t1.area()){
        //     return t2;
        // }
        // else{
        //     cout<<"The areas are equal";
        //     return t0;
        // }
        else{
        return t2;
    }
    }
};

int Triangle::count=0;

int main(){
    Triangle t1(10,20);
    Triangle t2(20,20);
    Triangle t3(Triangle::compareArea(t1,t2));
    cout<<t3.area();
    Triangle::count;
    return 0;
}
/*
a) Design a class Triangle with private attributes: base and height. Implement
a public function compareArea(Triangle &t1, Triangle &t2) that compares
the areas of two triangles passed as arguments and returns the triangle with
the larger area.
b) Design a C++ program with a variable named int count that tracks both the
number of items and the number of customers in the same program.
Initialize the count variable with no. of items=20 and no. of customers=12,
respectively. In main(), display the no. of items only. Ensure that the
solution does not use classes and :: operator 
*/