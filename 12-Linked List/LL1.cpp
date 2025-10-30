#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int value){
        this->data = value;
        this->next = NULL;
    }
};

void InsertAtHead(int value,Node* &head,Node* &tail){
    if(head == NULL){ // empty linked list
        Node* newNode = new Node(value); // step1 create new node
        head = tail = newNode;
    }
    else{ // non-empty linked list
        Node* newNode = new Node(value); // step1 create new node
        newNode->next = head;// step2 link the new node to the original linked list
        head = newNode; // step3 update head to the first node
    }
}
void InsertAtTail(int value,Node* &head,Node* &tail){
    if(head == NULL){
        Node* newNode = new Node(value);
        head = tail = newNode;
    }
    else{
        Node* newNode = new Node(value);
        tail->next = newNode;
        tail = newNode;
    }
}
void PrintLinkedList(Node* &head){
    Node *temp = head;
    while(temp != 0){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
int main(){
    // empty Linked list
    Node* head = NULL;
    Node* tail = NULL;
    InsertAtHead(10,head,tail);
    InsertAtHead(20,head,tail);
    InsertAtHead(30,head,tail);
    InsertAtTail(40,head,tail);
    PrintLinkedList(head);
    return 0;
}