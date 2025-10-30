#include <iostream>
#include <vector>
#include<algorithm>
#include<numeric>
using namespace std ;
class Solution {
public:
bool isPossibleSoln(vector<int>& position,int n,int mid,int m){
    int c = 1;
    int lastPos = position[0];
    for(int i=0;i<n;i++){
        if(position[i]-lastPos >= mid){
            c++;
            lastPos = position[i];
        }
        if(c==m){
            return true;
        }
}
return false;
}
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        int s = 1;
        int e = *max_element(position.begin(),position.end()) - *min_element(position.begin(),position.end());
        int ans = 0; 
        sort(position.begin(),position.end());
        if(m==2) return (e);
        while(s<=e){
            int mid = s + ((e-s)>>1) ;
            if(isPossibleSoln(position,n,mid,m)){
                ans = mid;
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return ans;
    }
};
int main(){
    
    return 0;
}