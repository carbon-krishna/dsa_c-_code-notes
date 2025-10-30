#include <iostream>
#include <stack>
using namespace std;
class Stack
{
public:
    int* arr;
    int size;
    int top;
    Stack(int capacity){
        arr = new int[capacity];
        top = -1;
        size = capacity;
    }

void push(int val){
    if(top == size-1){
        cout<<"overflow"<<endl;
    }
    else{
        top++;
        arr[top] = val;
    }
}
void pop(){
    if(top == -1){
        cout<<"underflow"<<endl;
    }
    else{
        top--;
    }
}
};
void insertAtBottom(stack<int> &s,int value){
    if(s.empty()){
        s.push(value);
        return;
    }
    int data = s.top();
    s.pop();
    insertAtBottom(s,value);
    s.push(data);
}

void reverseAstack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int data = s.top();
    s.pop();
    reverseAstack(s);
    insertAtBottom(s,data);
}

void insert_Sorted_Stack(stack<int> &s,int val){
    if(s.empty() || val>=s.top()){
        s.push(val);
        return;
    }
    int data = s.top();
    s.pop();
    insert_Sorted_Stack(s,val);
    s.push(data);
}

void SortStack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int data = s.top();
    s.pop();
    SortStack(s);
    insert_Sorted_Stack(s,data);
}

void printStack(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    printStack(s);
    insertAtBottom(s,100);
    printStack(s);
    reverseAstack(s);
    printStack(s);
    insert_Sorted_Stack(s,49);
    printStack(s);
    SortStack(s);
    printStack(s);
    return 0;
}