#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    // min/max in a range
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    
    auto it = min_element(arr.begin(),arr.end());
    cout<< *it << endl;
    
    return 0;
}