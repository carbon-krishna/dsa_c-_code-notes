#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> arr(6);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    arr[5] = 60;

    cout<<" Before: "<<endl;
    for(int a: arr){
        cout<<a<<" ";
    }
    cout<<endl;

    rotate(arr.begin(),arr.begin()+3 ,arr.end()); // kaha seh rotation kar rahe and kaha tak karna hain and rotation kaha tak hona chahiye .
    // like in this case rotation is starting from arr.begin() and it rotates from 3places ie 
    // arr.begin() + 3 and this rotation continues till theb last element arr.end()
    
    cout<<"After :"<<endl;
    for(int a: arr){
        cout<<a<<" ";
    }
    cout<<endl;
    return 0;
}