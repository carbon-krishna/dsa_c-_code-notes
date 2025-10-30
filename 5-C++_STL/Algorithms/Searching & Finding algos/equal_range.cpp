// equal_range = {lower_bound, upper_bound}
#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
int main(){
    
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(35);
    arr.push_back(40);
    arr.push_back(50);

    auto range = equal_range(arr.begin(), arr.end(),35);
    cout<< *range.first <<endl; // lower bound
    cout<< *range.second <<endl;// upper bound

    return 0;
}