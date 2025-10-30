#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[10];
    int size = sizeof(arr);
    cout<<size<<endl;
    fill(arr,arr+10,1);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    pair < double , int > p;
    p.first = 3.14;
    p.second = 7 ;
    return 0;
}
// memset fxn is a method of c