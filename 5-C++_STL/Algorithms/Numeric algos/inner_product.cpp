#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
int main(){
    
    vector<int> first;
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);

    vector<int> second;
    second.push_back(4);
    second.push_back(5);
    second.push_back(6);

    int ans = inner_product(first.begin(),first.end(),second.begin(),0);
    
    cout<<ans<<endl;
    
    return 0;
}