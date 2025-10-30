#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    
    vector<int> arr;
    arr.push_back(22);
    arr.push_back(11);
    arr.push_back(55);
    arr.push_back(66);
    arr.push_back(77);

    // max heap ---> make heap
    make_heap(arr.begin(),arr.end());
    for(int a: arr){
        cout<<a<<" ";  
    } 
    cout<<endl;

    arr.push_back(99);
    for(int a: arr){
        cout<<a<<" ";  
    }
    cout<<"Heap Break"<<endl;

    // insertion
    push_heap(arr.begin(),arr.end()); // use this to preserve heap property

    // max heap property :- In a max heap, every parent node is greater than or equal to its child nodes.
// This means the maximum value is always at the root (top) of the heap.
    for(int a: arr){
        cout<<a<<" ";  
    }
    cout<<endl;

    // deletion
    pop_heap(arr.begin(),arr.end());// max elemnt ko yeh fxn last mein bhej dega
    arr.pop_back();
    for(int a: arr){
        cout<<a<<" ";  
    }
    cout<<endl;
    
    sort_heap(arr.begin(),arr.end());
    for(int a: arr){
        cout<<a<<" ";  
    }

    return 0;
}