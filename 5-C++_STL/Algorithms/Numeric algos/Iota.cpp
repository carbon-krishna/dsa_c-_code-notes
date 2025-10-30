#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
int main(){
    
    vector<int> first(5);

    iota(first.begin(),first.end(),250);

    for(int a: first){
        cout<<a<<" ";
    }
}