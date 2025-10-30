#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
int main(){
    
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);
// if useh 35 mil gaya toh woh uska iterator return kar deka agar nahi mila toh joh usseh jaut bada hain uska kardega
    auto it = lower_bound(arr.begin(), arr.end(),35);
    cout<< *it <<endl;

    return 0;
}