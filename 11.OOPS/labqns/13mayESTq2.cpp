#include <iostream>
using namespace std;
class Shape
{
protected:
      double val1,val2;
public:
     void get_data();
     virtual void display_area()=0;
};
void Shape::get_data()
{
    cout<<"enter val1"<<endl;
    cin>>val1;
    cout<<"enter val2"<<endl;
    cin>>val2;
}
class Triangle : public Shape
{
public:
     void display_area();
};
void Triangle::display_area()
{
cout<<"Area of Triangle "<<0.5 *val1*val2<<endl;
}
class Rectangle : public Shape
{
public:
     void display_area();
};
void Rectangle::display_area()
{
cout<<"Area of Rectangle "<<val1*val2<<endl;
}
int main(){
    Shape *ptr[2];  // Array of base class pointers
    Rectangle r;
    Triangle t;

    ptr[0] = &r;
    ptr[1] = &t;

    cout << "--- Rectangle ---\n";
    ptr[0]->get_data();
    ptr[0]->display_area();

    cout << "--- Triangle ---\n";
    ptr[1]->get_data();
    ptr[1]->display_area();
    
    return 0;
}