#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> first;
    first.push(10);
    first.push(20);
    first.push(30);

    queue<int> second;
    second.push(100);
    second.push(200);
    second.push(300);

    cout<<first.front()<<endl;
    first.swap(second);
    cout<<first.front()<<endl;
    return 0;
}