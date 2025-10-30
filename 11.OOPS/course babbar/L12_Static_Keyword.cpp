#include <iostream>
using namespace std;
class abc{
    public:
    static int x,y;
    void print() const
    {
        cout<<x<<" "<<y<<endl;
    }
};
int abc::x;
int abc::y;
int main(){
    abc obj1;
    obj1.x = 1;
    obj1.y = 2;
    obj1.print();
    abc obj2;
    obj1.x = 10;
    obj1.y = 20;
    obj2.print();
    obj1.print();
    return 0;
}