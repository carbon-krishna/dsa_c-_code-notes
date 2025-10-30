#include<bits/stdc++.h>
using namespace std;
void printAllPermutations(string &s,int i){
    // base case
    if(i>=s.length()){
        cout<<s<<endl;
        return;
    }
    // 1 case solve kare
    for(int j=i;j<s.length(); j++){
        swap(s[i],s[j]);
        printAllPermutations(s,i+1);
        //backtracking
        swap(s[i],s[j]);
    }
}
int main(){ 
    string s = "abc";
    int i=0;
    printAllPermutations(s,i);
    return 0;
}