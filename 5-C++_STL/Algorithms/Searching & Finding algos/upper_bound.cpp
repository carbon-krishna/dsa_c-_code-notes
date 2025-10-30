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
// upper bound ke case mein hamesha chahe usein 35 mil jaye yah nah mile woh hamesha ussein just badi value hi dega
    auto it = upper_bound(arr.begin(), arr.end(),35);
    cout<< *it <<endl;

    auto it2 = lower_bound(arr.begin(), arr.end(),35); // diff b/w wpper and lower bound
    cout<< *it2 <<endl;
    return 0;
}