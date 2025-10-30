#include <iostream>
#include <queue>
using namespace std;
int main(){
    //min heap
    priority_queue<int,vector<int>,greater<int> >pq;
    // min-heap --> minimum value --> Highest Priority
    pq.push(10);
    // 10
    pq.push(90);
    // 10,90
    pq.push(20);
    // 10,20,90
    pq.push(50);
    // 10,20,50,90
    pq.push(1);
    // 1,10,20,50,90

    // top element --> highest priority element

    cout<<pq.top()<<endl; // 1 output
    pq.pop(); // 1 pop hojayga
// highest priority element --> pop
    cout<<pq.top()<<endl; // 10 o/p
    
    return 0;
}