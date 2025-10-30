#include <iostream>
using namespace std;
#define PI 3.14159465
#define MAXX(x,y) (x > y ? x : y)
#define SQUARE(x) x*x
float circleArea(float r)
{
    return PI*r*r;
}
float circlePerimeter(float r)
{
    return 2*PI*r;
}
void fun(){
    int x=6;
    int b=7;
    int c=MAXX(x,b);
    cout<<c;
}
void sq(){
    int a=15;
    int b=2;
    int c=SQUARE(3);
    cout<<"\n"<<c<<endl;
}
int main()
{
    cout<<circleArea(14);
    cout<<endl;
    cout<<circlePerimeter(14);
    cout<<endl;
    fun();
    sq();
    return 0;
}