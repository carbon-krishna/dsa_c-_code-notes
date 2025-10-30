// Deque:-
// 1) Double ended queue
// 2) similar to vectors but allows efficient insertion and removal at both the ends
// 3) suitable when elements need to inserted or removed frequently from the front or back.

#include <iostream>
#include <queue>
// doubly ended que can push and pop from both sides front and rear
using namespace std;
int main(){
    // creation
    deque<int> dq;
    dq.push_back(10);
    //10
    dq.push_back(20);
    // 10,20
    dq.push_back(40);
    // 10,20,40
    dq.push_front(100);
    // 100,10,20,40
    dq.push_front(200);
    // 200,100,10,20,40
    dq.push_front(300);
    // 300,200,100,10,20,40

    dq.pop_front();
    // 200,100,10,20,40
    dq.pop_back();
    // 200,100,10,20

    deque<int>::iterator it =dq.begin();
    while(it != dq.end()){
        cout<<*it<<" ";
        it++;
    }

    cout<<endl;
    cout<<dq.size()<<endl;
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;

    if(dq.empty() == true){
        cout<<"Deque is empty"<<endl;
    }
    else{
        cout<<"Deque is not empty"<<endl;
    }

    cout<<dq[3]<<endl;
    cout<<dq.at(3)<<endl; //both are same 

    cout<<dq.size()<<endl;
    dq.clear();
    cout<<dq.size()<<endl;
    dq.insert(dq.begin(),101);
    cout<<dq.size()<<endl;
    cout<<dq[0]<<endl;
    return 0;
}