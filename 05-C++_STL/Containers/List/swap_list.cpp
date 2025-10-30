#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int> first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    list<int> second;
    second.push_back(100);
    second.push_back(200);
    second.push_back(300);

    list<int>::iterator it = first.begin();
    while(it != first.end()){
        cout<< *it <<endl;
        it++;
    }
    first.swap(second);
    list<int>::iterator it2 = first.begin();
    while(it2 != first.end()){
        cout<< *it2 <<endl;
        it2++;
    }
    return 0;
}