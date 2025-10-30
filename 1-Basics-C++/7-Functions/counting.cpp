#include <iostream>
using namespace std;
void counting_fxn(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    counting_fxn(n);
    return 0;
}