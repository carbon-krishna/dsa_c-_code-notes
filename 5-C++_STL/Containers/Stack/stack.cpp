// Stack:-
// 1)Adaptor class that provides a last-in , first - out(lifo) data structure 
// 2) implemented using other containers(eg. vector,deque,list) as the underlying storage.
#include <iostream>
#include <stack>
using namespace std;
int main(){
    // creation 
    stack<int> st;

    //insertion
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.size()<<endl;
    st.pop(); // 30 will be removed/pop as in stack last added element is removed
    cout<<st.size()<<endl;
    cout<<st.top()<<endl; // .top() gives us the element which appears on the top of the stack ie the last element added in the stack
    st.pop();
    cout<<st.top()<<endl;
    return 0;
}