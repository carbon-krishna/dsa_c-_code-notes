#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
int main(){
    
    vector<int> first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    first.push_back(40);
    first.push_back(50);
// condn for binary search data should be sorted or monotonic order
    int target = 40;
    bool it = binary_search(first.begin(),first.end(),target);
    cout<< it <<endl;

    return 0;
}