#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;
class solution{
public:
void allSubseq(string s,int index,string output,vector<string> &ans){
    int size = s.length();
        //base case
        if(index>=size){
            ans.push_back(output);
            return;
        }
        char ch = s[index];
        output.push_back(ch);
        allSubseq(s,index+1,output,ans); // include
        output.pop_back();
        allSubseq(s,index+1,output,ans); // exclude
    }
vector<string> generateAllSubsequences(string s) {
        // Logic to generate all subsequences
        vector<string> ans;
        int index = 0;
        string output = "";
        allSubseq(s,index,output,ans);
        sort(ans.begin(),ans.end());
        return ans; // Placeholder
    }
};
int main(){
    string s = "KRISHNA"; // input string

    solution obj; // create object of the class

    vector<string> ans = obj.generateAllSubsequences(s); // call function
    sort(ans.begin(),ans.end());

    // print results
    int i=1;
    for(string subseq : ans){
        cout << i <<"\"" << subseq << "\"" << endl;
        i++;
    }

    return 0;
}
