// Priority queue:-
// 1) Adapter class that provides a priority queue (heap)
// 2) Elements are stored in a way that allows the retrieval of the highest-priority element efficiently

#include <iostream>
#include <queue>
using namespace std;
int main(){
    //creation
    priority_queue<int> pq;
    // max-heap --> maximaum value --> Highest Priority

    pq.push(10);
    // 10
    pq.push(90);
    // 90,10
    pq.push(20);
    // 90,20,10
    pq.push(50);
    // 90,50,20,10
    pq.push(1);
    // 90,50,20,10,1

    // top element --> highest priority element

    cout<<pq.top()<<endl; // 90 output
    pq.pop(); // 90 pop hojayga
// highest priority element --> pop
    cout<<pq.top()<<endl; // 50 o/p
    
    return 0;
}