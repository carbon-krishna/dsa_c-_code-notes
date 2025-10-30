#include <iostream>
#include <vector>
#include <string>
#include<limits.h>
using namespace std;

class Node{
	public:
		int data;
		Node* next;

	//Constructor
	Node(int value) {
		this->data = value;
		this->next = NULL;
	}
};

//this function return the head of the updated LINked List
void insertAtHead(int value, Node* &head, Node* &tail) {
	
	if(head == NULL && tail == NULL) {
		//empty ll
		//step1: create a new Node
		Node* newNode = new Node(value);
		//step2: point head and tail on that new node
		head = newNode;
		tail = newNode;
	}
	else {
		//non-empty linked list
		//step1: create a new node
		Node* newNode = new Node(value);
		//step2: link the new node to the original linked list 
		newNode->next = head;
		//step3: update head to the first node
		head = newNode;
	}
	//return the head of the modified linked list
	//return head;
	
}

void insertAtTail(int value, Node* &head, Node* &tail) {
	
	if(head == NULL && tail== NULL) {
		//empty ll
		Node* newNode = new Node(value);
		head = newNode;
		tail = newNode;
	}
	else {
		//nopnempty ll
		Node* newNode = new Node(value);
		tail->next = newNode;
		tail = newNode;
	}
	//return head;
}

void printLinkedList(Node* head) {
	Node* temp = head;

	while(temp != NULL) {
		cout << temp->data << "->";
		temp = temp -> next;
	}
	cout << endl;
}

bool searchInLinkedList(int target, Node* head ) {
	Node* temp = head;

	while(temp != NULL) {
		if(temp -> data == target) {
			return true;
		}
		else {
			//go to next node
			temp = temp -> next;
		}
	}
	//agar main yaha tk pohoch gya, iska mtlb maine poori
	//linked list travel krli and ntarget nahi mila 
	return false;
}

int getLengthOfLinkedList(Node* head) {
	int len = 0;

	Node* temp = head;

	while(temp != NULL) {
		//count node
		len++;
		//move to next node
		temp = temp -> next;
	}

	return len;
}

void insertAtPosition(int position, int value, Node* &head, Node* &tail ) {
	//assuming the given position will always be inside bounds and not invalid

	//checking out of boud value of position
	//valid range -> 1 to length + 1
	int length = getLengthOfLinkedList(head);
	if(position < 1 || position > length + 1) {
		cout << "value of position is out of bound " << endl;
		return;
	}
	
	if(position == 1) {
		insertAtHead(value, head, tail);
		return;
	}
	else if(position == length + 1) {
		insertAtTail(value, head, tail);
		return;
	}
	else {
		//middle ki position h koi
		//Step1: Node create
		Node* newNode = new Node(value);
		//Step2: temp variable ko pos-1 reach kqaraya tha
		Node* temp = head;
		for(int i=1; i<=position-2; i++) {
			temp = temp -> next;
		}
		//Step3: newNode ko temp->next se connect kia tha 
		newNode->next = temp->next;
		//Step4: temp ko neowNode se connect kia tha 
		temp->next = newNode;
	}
}

void deleteFromPosition(int position, Node* &head, Node* &tail) {
	//invalid cases
	int length = getLengthOfLinkedList(head);
	
	if(position > length) {
		return;
	}
	if(head == NULL && tail == NULL) {
		return;
	}

	//position = 1 and LL single node 
	if(head == tail && position == 1) {
		Node* temp = head;
		head = NULL;
		tail = NULL;
		delete temp;
		return;
	}
	//LL has mjultiple nodes but position = 1
	if(position == 1) {
		Node* temp = head;
		head = head -> next;
		temp->next = NULL;
		delete temp;
		return;
	}
	else {
		//either you are delete middle nodes or the last node 
		//step1: setup current/previous/forward
		Node* previous = head;
		for(int i=1; i<=position-2; i++) {
			previous = previous->next;
		}
		Node* current = previous -> next;
		Node* forward = current -> next;
		//HOMEWORK -> do it via 2 pointers only

		//update links
		current->next = NULL;
		previous ->next = forward;
		//current is isolated now
		delete current;
	}
}

void reverseLinkedList(Node* &head) {
	//empty LL
	if(head == NULL) {
		return;
	}
	//setting up prev and curr
	Node* prev = NULL;
	Node* curr = head;

	//updating links
	while(curr != NULL) {
		Node* forward = curr->next;
		curr->next = prev;
		prev = curr;
		curr = forward;
	}
	//update head
	head = prev;
}

//rturn the head of reversed LL
Node* reverseLLRecursive(Node* &head, Node* prev) {
	if(head == NULL) {
		return prev;
	}	

	//1 case main solve karunga
	Node* curr = head;
	Node* forward = curr->next;

	curr->next = prev;
	//ab tak main 1 node ko reverse krlia h 
	//baaaki recursion sambhal lega 
	return reverseLLRecursive(forward, curr);
}

//returns the mid node of LL
Node* getMidNode(Node* head) {
	Node* slow = head;
	Node* fast = head;

	//agar fast k paas 2 step chalne ka chance h, toh hi main slow and fast ko aage badhaunga, nahi toh loop se bahar niklo
	while(fast!= NULL && fast->next != NULL) {
		slow = slow -> next;
		fast = fast->next ->next;
	}
	return slow;
}

bool checkPalindromeLL(Node* head) {
	//find length of LL 
	int len = getLengthOfLinkedList(head);
	//find mid 
	Node* mid = getMidNode(head);
	//update mid as per even/odd length 
	//even length me mid as it is use krna h 
	//odd case me main finalMid , mid->next ko lunga 
	Node* finalMid = NULL;
	if(len & 1) {
		//odd
		finalMid = mid->next;
	}
	else {
		//even
		finalMid = mid;
	}
	//reverseLL starting from mid node -  reverse second half
	reverseLinkedList(finalMid);
	//now i have 2 linked list with starting pointer as head and finalMid
	
	//compare and return t/false;
	Node* temp = head;
	while(temp != NULL && finalMid != NULL) {
		if(temp->data != finalMid -> data) {
			return false;
		}
		//1 stp aage badhao
		temp = temp->next;
		finalMid = finalMid -> next;
	}
	//agar main yaha tk aagya, iska mtlb saaare data match hgye
	//palindrome hai 
	return true;
}

int main() {

	//Empty Linked LIst
	Node* head = NULL;
	Node* tail = NULL;
	insertAtHead(3, head, tail);
	insertAtHead(2, head, tail);
	insertAtHead(1, head, tail);
	insertAtTail(2, head, tail);
	insertAtTail(1, head, tail);
	printLinkedList(head);

	//reverseLinkedList(head);
	cout << endl;

	cout << checkPalindromeLL(head);

	// Node* mid = getMidNode(head);
	// cout << mid->data << endl;
	// printLinkedList(head);
	// Node* prev = NULL;
	// head = reverseLLRecursive(head, prev);
	// printLinkedList(head);

	// insertAtPosition(51, 500, head, tail);
	// cout << endl << " Modified List: " << endl;
	// printLinkedList(head);

	// deleteFromPosition(1, head, tail);
	// cout << endl << " Modified List: " << endl;
	// printLinkedList(head);

	// deleteFromPosition(1, head, tail);
	// cout << endl << " Modified List: " << endl;
	// printLinkedList(head);

	// deleteFromPosition(1, head, tail);
	// cout << endl << " Modified List: " << endl;
	// printLinkedList(head);

	// deleteFromPosition(1, head, tail);
	// cout << endl << " Modified List: " << endl;
	// printLinkedList(head);

	//cout << getLengthOfLinkedList(head) << endl;
	//cout << searchInLinkedList(100,  head);
	return 0;
}

// #include <iostream>
// using namespace std;
// // reverse a linked list
// class Node
// {
// public:
//     int data;
//     Node* next;
//     Node(int _val){
//         this->data=_val;
//         this->next=NULL;
//     }
// };
// void printLinkList(Node* &head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout<<temp->data<<"->";
//         temp = temp->next; 
//     }
//     cout<<" NULL "<<endl;
// }
// void inserthead(int _val,Node* &head,Node* &tail){
//     if(head==NULL){
//         Node* newNode = new Node(_val);
//         head=tail=newNode;
//     }
//     else{
//         Node* newNode = new Node(_val);
//         newNode->next = head;
//         head = newNode;
//     }
// }
// void reverseLinkedList(Node* &head,Node* &tail){
//     if(head==NULL) return;
//     Node* prev = NULL;
//     Node* curr = head;
//     while(curr != NULL){
//         Node* forw = curr->next;
//         curr->next = prev;
//         prev=curr;
//         curr=forw;
//     }
//     head = prev;
// }
// Node* Reverse_LL_Recursive(Node* &head,Node* prev){
//     if(head==NULL){
//         return prev;
//     }
//     // 1 case mainh solve karunga
//     Node* curr = head;
//     Node* forw = curr->next;
//         curr->next = prev;
//         return Reverse_LL_Recursive(forw,curr);
// }

// int main(){
//     Node* head = NULL;
//     Node* tail = NULL;
//     Node* prev = NULL;
//     inserthead(40,head,tail);
//     inserthead(10,head,tail);
//     inserthead(20,head,tail);
//     inserthead(30,head,tail);
//     printLinkList(head);
//     reverseLinkedList(head,tail);
//     printLinkList(head);
//     head = Reverse_LL_Recursive(head,prev);
//     printLinkList(head);
//     return 0;
// }