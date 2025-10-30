#include <iostream>
using namespace std;
// In C++, global variables are automatically initialized to zero (or equivalent default values), whereas local variables hold garbage values if not explicitly initialized.
int x=2; //GLOBAL VARIABLE
void fun()
{
    int x = 60;
    cout<<x<<endl;
    cout<<::x<<endl;
}
int main()
{
    ::x=4;//global x
    int x = 20;// local to main() fn
    cout<<x<<endl;
    cout<<::x<<endl; // accessing global with ::
    {
        int x=50;
        {
            int x=44;
            cout<<x<<endl;
            cout<<::x<<endl;
        }
        cout<<x<<endl;
        cout<<::x<<endl;
    }
    fun();
    return 0;
}