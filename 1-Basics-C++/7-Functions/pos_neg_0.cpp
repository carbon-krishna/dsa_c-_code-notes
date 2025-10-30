#include <iostream>
using namespace std;
void No_Check(int n){
    if(n>0){
        cout<<"POSITIVE Number";
    }
    else if(n<0){
        cout<<"NEGATIVE Number";
    }
    else{
        cout<<"ZERO";
    }
}
int main(){
    int n;
    cin>>n;
    No_Check(n);
    return 0;
}