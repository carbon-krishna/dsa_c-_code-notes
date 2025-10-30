#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int val){
        this->data=val;
        this->next=NULL;
    }
};
void Insert_Head(int val,Node* &head,Node* &tail){
    if(head==NULL){
        Node* newNode = new Node(val);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }
}
void PrintLinkedList(Node* &head){
    Node* temp = head;
    while(temp != 0){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout << "NULL\n";
}
void Insert_Tail(int val,Node* &head,Node* &tail){
    if(head==NULL){
        Node* newNode = new Node(val);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(val);
        tail->next = newNode;
        tail = newNode;
    }
}
bool Search_In_Linked_list(int val,Node* &head){
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == val) return true;
        temp = temp->next;
    }
    return false;
}
void Length_Of_Linked_List(Node* head){
    Node* temp = head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    cout<<"the length of linked list is : "<<len<<endl;
}
int LenofLL(Node* head){
    Node* temp = head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
void delete_at_position(int pos,Node* &head,Node* &tail){
    int len = LenofLL(head);
    //invalid cases
    if(pos>len+1){ // C-1
        cout<<"position > length of linked list"<<endl;
        return;
    }
    else if(head==NULL){ // C-2
        cout<<"can't delete from empty LL"<<endl;
        return;
    }
    else if(pos==1 & head==tail){ //C-3 position = 1 and LL single node
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }
    else if(pos==1){ // C-4 LL has multiple nodes but position = 1
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    else{ // C-5 either you are delete middle nodes or the last node 
	//step1: setup current/previous/forward
    Node* prev = head; 
    for(int i=1;i<pos-1;i++){
        prev=prev->next;        
    }
    Node* curr = prev->next;
    Node* forw = curr->next;

    //update links
    curr->next = NULL;
    prev->next = forw;
    //current is isolated now
    delete curr;
}
}
void insert_at_Position(int value,int pos,Node* &head,Node* &tail){
    Node* temp = head;
    Node* newNode = new Node(value);
    if(pos==1){
        Insert_Head(value,head,tail);
        return;
    }
    int len = LenofLL(head);
    if(pos==len+1){
        Insert_Tail(value,head,tail);
        return;
    }
    if(pos < 1 || pos > len + 1){
        cout << "Position " << pos << " is out of bounds. Valid positions: 1 to " << len+1 << endl;
        return;
    }
    for(int i=1;i<pos-1;i++){
        temp=temp->next; 
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void del_at_pos_using_2pointers(int pos,Node* &head,Node* &tail){
    int length = LenofLL(head);
    //C-1
    if(pos>length+1){
        cout<<"pos>length of linked list"<<endl;
        return;
    }
    //C-2
    if(head==NULL && tail==NULL){ 
        cout<<"empty linked list"<<endl;
        return;
    }
    //C-3 single LINKED LIST & delete at pos=1
    if(pos==1 && head==tail){ 
        Node* temp = head;
        head=NULL;
        tail=NULL;
        delete temp;
        return;
    }
    //C-4 multiple LINKED LIST but delete at pos=1
    if(pos==1){ 
        Node* temp = head;
        head = head->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    // C-5 either you are delete middle nodes or the last node 
    // using 2 pointers 
    else{ 
    Node* prev = head; 
    for(int i=1;i<pos-1;i++){
        prev=prev->next;        
    }
Node* forw = (prev->next)->next;  // Save the node after the node to delete
delete prev->next;                 // Delete the node to delete
prev->next = forw;                // Link prev to forward


    // Node* curr = prev->next;

    // prev->next = curr->next;
    // curr->next = NULL;
    // delete curr;
}
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    Insert_Head(5,head,tail);
    Insert_Tail(10,head,tail);
    Insert_Tail(15,head,tail);
    PrintLinkedList(head);
    bool found = Search_In_Linked_list(10,head);
    if(found) {
        cout << "Value 10 found in the linked list.\n";
    } else {
        cout << "Value 10 not found in the linked list.\n";
    }
    Length_Of_Linked_List(head);
    insert_at_Position(165,3,head,tail);
    PrintLinkedList(head);
    delete_at_position(4,head,tail);
    PrintLinkedList(head);
    del_at_pos_using_2pointers(2,head,tail);
    PrintLinkedList(head);
    return 0;
}