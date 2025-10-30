#include <iostream>
#include <map>
using namespace std;
int main(){
    // creation
    map<string , string> table;

    //insertion
    table["in"] = "India"; // M-1
    table.insert(make_pair("en","England")); // M-2

    // M-3
    pair<string, string> p;
    p.first = "br";
    p.second = "Brazil";
    table.insert(p);

    cout<<table.size()<<endl;
    // table.clear();
    // cout<<table.size()<<endl;

    // if(table.empty() == true){
    //     cout<<"map is empty"<<endl;
    // }
    // else{
    //     cout<<"map is not empty"<<endl;
    // }

    cout<<table.at("in")<<endl;
    table.at("in")="india2"; // value updation M-1
    table["in"]="India 3"; // value updation M-2
    cout<<table.at("in")<<endl;

    map<string , string>::iterator it =table.begin();
    while(it != table.end()){
        pair<string,string> p = *it;
         cout << p.first<<" "<<p.second <<endl;
         it++;
    }
    if(table.find("in") != table.end()){
        cout<<"key found"<<endl;
    }
    else{
        cout<<"key not found"<<endl;
    }
    if(table.count("im")==0){ // count either be 0 or 1
       cout<<"key not found"<<endl; 
    }
    
    return 0;
}