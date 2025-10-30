#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
    Node(int _val){
        this->data = _val;
        this->next = NULL;
    }
};
void insertHead(int value,Node* &head,Node* &tail){
    if(head==NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }
}
void printLL(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<" NULL "<<endl;
}
void reverseLL(Node* &head){
    if(head==NULL) return;
    Node* prev = NULL;
    Node* curr = head;
    while(curr != NULL){
        Node* forw = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forw;
    }
    head = prev;
}
Node* reverseLL_Recursive(Node* &head,Node* prev){
    if(head==NULL){
        return prev;
    }
    Node* curr = head;
    Node* forw = curr->next;
    curr->next = prev;
    Node* reverse_LL_head = reverseLL_Recursive(forw,curr);
    return reverse_LL_head;
}
Node* recursive_ll_Rev(Node* curr,Node* prev){
    if(curr==NULL){
        return prev;
    }
    Node* forw = curr->next;
    curr->next = prev;
    Node* head_rll = recursive_ll_Rev(forw,curr);
    return head_rll;
}
// fast ptr & slow ptr
// tortoise algo
Node* getMidNode(Node* &head){
    Node* fast = head;
    Node* slow = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = (fast->next)->next;
    }
    return slow;
}
int getLength_LL(Node* &head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
bool checkPalindromeLL(Node* &head){
    // step1 :- find length of linked list
    int length = getLength_LL(head);
    // step2 :- find mid of linked list
    Node* mid = getMidNode(head);
    // step3 :- update the mid as per even/odd length 
    if(length & 1){
        // odd
        mid = mid->next;
    }
    // even mid=mid so no change
    //step4 :- reverse linked list strating from mid node
    reverseLL(mid);
    // step5 :- compare and return true/false
    Node* temp = head;
    while(temp != NULL && mid != NULL){
        if(temp->data != mid->data){
            return false;
        }
        temp=temp->next;
        mid=mid->next;
    }
    return true;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    Node* prev = NULL;
    insertHead(10,head,tail);
    insertHead(20,head,tail);
    insertHead(30,head,tail);
    insertHead(40,head,tail);
    printLL(head);
    reverseLL(head);
    printLL(head);
    head = reverseLL_Recursive(head,prev);
    printLL(head);
    head = recursive_ll_Rev(head,prev);
    printLL(head);
    Node* mid = getMidNode(head);
    cout<<mid->data;
    cout<<endl;
    insertHead(10,head,tail);
    insertHead(20,head,tail);
    insertHead(30,head,tail);
    insertHead(40,head,tail);
    printLL(head);
    int x=checkPalindromeLL(head);
    cout<<"\n"<<x;
    return 0;
}