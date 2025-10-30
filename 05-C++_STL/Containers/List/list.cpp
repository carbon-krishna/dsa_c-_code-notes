// List:
// 1) Doubly-linked list
// 2) Allows fast insertions and removals anywhere in the list
// 3) No random access like vectors

#include <iostream>
#include <list>
using namespace std;
int main(){
    // creation
    list<int> myList;

    //insertion
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_back(40);

    myList.push_front(50);
    myList.pop_back();  // removal from back

    myList.pop_front(); // removal from front

    cout<<myList.back()<<endl;

    cout<<myList.front()<<endl;

    list<int>::iterator it = myList.begin();
    while(it != myList.end()){
        cout<< *it <<endl;
        it++;
    }
    myList.push_back(10);
    
    myList.remove(10); //  removes 10 all the times from the list
    list<int>::iterator it2 = myList.begin();
    while(it2 != myList.end()){
        cout<< *it2 <<endl;
        it2++;
    }
    return 0;
}