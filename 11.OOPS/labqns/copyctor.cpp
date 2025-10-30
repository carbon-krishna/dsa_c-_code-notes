#include <iostream>
#include <string>
using namespace std;
class COPC_2Q11
{
int age;   
string Name; 
public:
    COPC_2Q11(){
        cout<<"default ctor called"<<endl;
    }
    COPC_2Q11(int _age,string _name){
        this->age = _age;
        this->Name = _name;
        cout<<"Parametrized ctor called"<<endl;
        cout<<this->Name<<" "<<this->age<<endl;
    }
    COPC_2Q11(COPC_2Q11 const &srcobj){
        this->age = srcobj.age;
        this->Name = srcobj.Name;
        cout<<"copy ctor called"<<endl;
    }
    ~COPC_2Q11(){
        cout<<"dtor called"<<endl;
    }
};
int main(){
    COPC_2Q11 Krishna;
    COPC_2Q11 Kaustav(14,"kie");
    COPC_2Q11 Kriss(Kaustav);
    return 0;
}