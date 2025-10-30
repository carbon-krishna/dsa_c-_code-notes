// Set:-
// 1) Sorted collection of unique elements .
// 2) Elements are stored in sorted order , and duplicates are automatically removed .
// 3) Provides efficient insertion , deletion and search operations .

#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int> st;
    st.insert(10);
    st.insert(15);
    st.insert(8);
    st.insert(4);

    // traverse
    set<int>::iterator it= st.begin();
    while(it != st.end()){
        cout<<*it<<" ";
        it++;
    }
    return 0;
}