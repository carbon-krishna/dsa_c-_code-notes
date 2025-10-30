// a ---> 97
// A ---> 65
// MAKE A FXN TO CONVERT UPPERCASE char TO LOWERCASE char
#include <iostream>
using namespace std;
void converter(char n){
    char ans = n - 'a' + 'A';
    cout<<"uppercase CHARACTER : "<<ans<<endl;
}
int main(){
     char n;
     cin>>n;
    converter(n);
    return 0;
}