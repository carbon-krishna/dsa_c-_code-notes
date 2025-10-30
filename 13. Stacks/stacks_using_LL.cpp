#include <iostream>
#include <stack>
using namespace std;
class Node
{
public:
int data;
Node* next;
Node(int val){
    this->data=val;
    this->next=NULL;
}
};
class Stack
{
Node* top;
Stack(){
    top=NULL;
}
void push(int val){
    Node* newNode = new Node(val);
    newNode->next = top;
    top = newNode;
}

};
int main(){
    
    return 0;
}