// Queue
// 1)Adaptor class that provides a first-in , first-out(fifo) data structure
// 2) Implemented using other containers (eg. deque , list)as the underlying storage

#include <iostream>
#include <queue>
using namespace std;
int main(){
    // creation
    queue<int> q;

    // insertion
    q.push(10); // in queue push / arrival occurs from back
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<q.size()<<endl;
    cout<<"Front "<<q.front()<<endl;
    cout<<"Back "<<q.back()<<endl;
    q.pop(); // in queue pop/ removal occurs from front
    if(q.empty()== true){
        cout<<"queue is empty";
    }
    else{
        cout<<"queue is not empty";
    }

    return 0;
}