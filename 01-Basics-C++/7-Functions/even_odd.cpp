#include <iostream>
using namespace std;
int Even_Odd_Fxn(int n){
    int p = n%2;
    (p>0)?cout<<"odd":cout<<"even";
    return p;
}
int main(){
    int n;
    cin>>n;
    Even_Odd_Fxn(n);
    return 0;
}