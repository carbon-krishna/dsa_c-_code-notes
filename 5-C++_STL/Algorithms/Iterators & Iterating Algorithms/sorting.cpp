// sort :- sorts elements in a range of ascending order
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> arr(6);
    arr[0] = 11;
    arr[1] = 20;
    arr[2] = 41;
    arr[3] = 40;
    arr[4] = 31;
    arr[5] = 9;

    sort(arr.begin(),arr.end()); // ascending order

    for(int a: arr){
        cout<<a<<" ";
    }
    cout<<endl;

    reverse(arr.begin(),arr.end()); // descending order
    
    for(int a: arr){
        cout<<a<<" ";
    }

    return 0;
}