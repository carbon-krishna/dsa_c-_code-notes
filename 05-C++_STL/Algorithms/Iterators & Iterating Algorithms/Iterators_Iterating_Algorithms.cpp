#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printDouble(int a){
    cout<<2*a<<" ";
}

bool checkEven(int n){
    return n%2 == 0;
}
int main(){

    vector<int> arr(5);
    arr[0] = 11;
    arr[1] = 20;
    arr[2] = 11;
    arr[3] = 40;
    arr[4] = 11;

    for_each(arr.begin(),arr.end(),printDouble);
// to apply a fxn to specific range in a container we use for_each .

    cout<<endl;
    int target = 40;
    auto it = find(arr.begin(),arr.end(),target); // auto --> automatically finds it(iterator)
    // find fxn finds a value
    cout << *it << endl;
//this algo return iterator

    auto it2 = find_if(arr.begin(),arr.end(), checkEven);// find_if fxn finds a value that satisfies the given fxn
    cout<< *it2 <<endl;

    int aim = 11;
    int ans = count(arr.begin(),arr.end(),aim);
    cout<<ans<<endl; //

    int answer = count_if(arr.begin(),arr.end(),checkEven);
    cout<<answer<<endl;

    // std::unique only removes consecutive duplicates, so you usually sort the array first if you want to remove all duplicates.
    sort(arr.begin(),arr.end());

    auto it3 = unique(arr.begin(),arr.end());
    // it iterator k phle saaare unique element hain 
    // it k baad saare duplicate element hain

    arr.erase(it3 , arr.end());
    for(int a: arr){
        cout<<a<<" ";
    }

    
    return 0;
}