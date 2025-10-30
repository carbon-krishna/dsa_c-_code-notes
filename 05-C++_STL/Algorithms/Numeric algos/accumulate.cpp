#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
int main(){
    
    vector<int> arr(6);
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;
    arr[5]=60;

    int totalSum = accumulate(arr.begin(),arr.end(),0);
    cout<<totalSum<<endl;
    
    return 0;
}