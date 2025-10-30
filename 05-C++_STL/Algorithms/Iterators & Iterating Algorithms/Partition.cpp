#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool checkEven(int n){
    return n%2 == 0;
}
int main(){
    vector<int> arr(6);
    arr[0] = 11;
    arr[1] = 12;
    arr[2] = 13;
    arr[3] = 14;
    arr[4] = 15;
    arr[5] = 16;

    cout<<"Before Partition :- ";
    for(int a: arr){
        cout<<a<<" ";
    }
    cout<<endl;

    auto it = partition(arr.begin(),arr.end(),checkEven);

    cout<<"After Partition :- ";
    for(int a: arr){
        cout<<a<<" ";
    }

    return 0;
}