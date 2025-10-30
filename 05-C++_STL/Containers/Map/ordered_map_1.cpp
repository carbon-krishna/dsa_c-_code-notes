    // Map:- 1) Associative container that stores key value pairs
    //       2) Allows efficient retrieval and modification of values based on keys
    //       3) keys are unique within the map .
    
#include <iostream>
#include <map>
using namespace std;
int main(){
    
    map<int,string> table;
    table.insert(make_pair(3,"love"));
    table.insert(make_pair(1,"babita"));
    table.insert(make_pair(2,"sunita"));
    map<int,string>::iterator it = table.begin();
    while(it != table.end()){
        pair<int , string> p =*it;
        cout<<p.first<<" "<<p.second<<endl;
        it++;
    } 

    return 0;
}