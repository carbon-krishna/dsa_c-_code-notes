#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;
int main(){
    unordered_set<int> st;
    st.insert(10);
    st.insert(15);
    st.insert(8);
    st.insert(4);

    // traverse
    unordered_set<int>::iterator it= st.begin();
    while(it != st.end()){
        cout<<*it<<" ";
        it++;
    }
    return 0;
}