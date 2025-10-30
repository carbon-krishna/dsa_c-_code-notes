#include <iostream>
using namespace std;
class abc
{
public:
     int x;
     int *y;

     abc(int _x,int _y):x(_x),y(new int(_y)){}

     // default dumb copy ctor : it does SHALLOW COPY
    //  abc(const abc &obj)
    //  {
    //     x=obj.x;
    //     y=obj.y;
    //  }
    // OUR SMART DEEP COPY
     abc(const abc &obj)
     {
        x=obj.x;
        y=new int(*obj.y);
     }
    void print() const
    {
        printf("X:%d\nPTR Y:%p\nContent of Y(*y):%d\n\n",x,y,*y);
    }
    ~abc()
    {
        delete y;
    }
};
int main(){
    abc a(1,2);
    cout<<"PRINT A\n";
    a.print();
    abc b=a;
    b.print();
    
    return 0;
}