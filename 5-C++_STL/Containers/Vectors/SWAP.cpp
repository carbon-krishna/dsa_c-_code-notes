#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> first;
    vector<int> second;

    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    first.push_back(40);

    second.push_back(100);
    second.push_back(200);
    second.push_back(300);
    second.push_back(400);

    // create an iterator
    vector<int>::iterator it = first.begin();
    while(it != first.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;

    first.swap(second);
    // cout<<first[0]<<" "<<first[1]<<" "<<first[2]<<" "<<first[3]<<endl;
    // cout<<second[0]<<" "<<second[1]<<" "<<second[2]<<" "<<second[3];

    for(int i : first){ // for loop vector
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i : second){
        cout<<i<<" ";
    }
    return 0;
}