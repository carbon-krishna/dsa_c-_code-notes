#include <iostream>
#include<vector>
#include<climits>
#include <algorithm>
using namespace std;

void print(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "; 
    }
    cout<<endl;
}
void Bubble_Sort(vector<int> &v1){  // code for ascending order if we need descending order we'll change
                                  // v[j]<v[j+1]
    int n = v1.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(v1[j]>v1[j+1]){
                swap(v1[j],v1[j+1]);
            }
        }
    }
}
void Insertion_Sort(vector<int> &v2){

    int n = v2.size();
    for(int i=1;i<n;i++){
        int key = v2[i];
        int j=i-1;
        while(j>=0 && v2[j]>key){
        v2[j+1]=v2[j];
        j--;
    }
    v2[j+1] = key;
}
    }

void Selection_Sort(vector<int> &v3){
    int n = v3.size(); 
    for(int i=0;i<n-1;i++){
        int min_index = i;
        for(int j=i+1;j<n;j++){ 
            if(v3[j]<v3[min_index]){
                min_index = j;
            }
        }
        swap(v3[i],v3[min_index]);
    }
}    
int main(){
    vector<int> v1 ={5,3,0,-1,33,99,100,56};
    vector<int> v2 ={44,33,55,22,11};
    vector<int> v3 ={44,33,55,22,11};
    Bubble_Sort(v1); // this is ascending order
    cout<<"Bubble Sort :- ";
    print(v1);
    cout<<"Insertion Sort :- ";
    Insertion_Sort(v2);
    print(v2);
    cout<<"Selection Sort :- ";
    Selection_Sort(v3);
    print(v3);
    return 0;
}