#include <iostream>
using namespace std;

class Node{
  public: 
  int data;
  Node* prev;
  Node* next;

  Node(int value) {
    data = value;
    prev = NULL;
    next = NULL;
  }
};

void InsertHead(int value,Node* &head,Node* &tail){
    if(head==NULL){
        Node* newNode = new Node(value);
        head=newNode;
        tail=newNode;
    }
    else{
    Node* newNode = new Node(value);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
}
void print(Node* head) {
  Node* temp = head;
  while(temp != NULL) {
    cout << temp->data << "->";
    temp = temp ->next;
  }
  cout << "NULL"<<endl;
}
void printReverse(Node* tail){
    Node* temp = tail;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->prev;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
  InsertHead(10,head,tail);
  //10->NULL
  InsertHead(20,head,tail);
  //20->10->NULL
  InsertHead(30,head,tail);
  //30->20->10->NULL
  print(head);
  printReverse(tail);
  return 0;
}