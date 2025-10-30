#include<iostream>
#include<vector>
#include<limits.h>
// #include <bits/stdc++.h>
using namespace std;

void printArray(int arr[],int size,int index){
    if(index>=size) return;
    cout<<arr[index]<<" ";
    printArray(arr,size,index+1);
}
void reverseArray(int *arr,int size){
    if(size<1) return;
    cout<<arr[size-1]<<" ";
    reverseArray(arr,size-1);
}
int searchArray(int arr[],int size,int index,int target){
    if(index>=size){
        return -1;
    }
    if(arr[index]==target){
        return index;
    }
    return searchArray(arr,size,index+1,target);
}
void minArray(int arr[],int size,int index,int &mini){
    if(index>=size){
        return;
    }
    mini = min(arr[index],mini);
    minArray(arr,size,index+1,mini);
}
void maxArray(int arr[],int size,int index,int &maxi){
    if(index>=size){
        return;
    }
    maxi = max(arr[index],maxi);
    maxArray(arr,size,index+1,maxi);
}
void oddNos(int arr[],int size,int index){
    if(index>=size) return; // base case condn
    if((arr[index])&1){
        cout<<arr[index]<<" ";
    }
    oddNos(arr,size,index+1);
}
void evenNos(int arr[],int size,int index){
    if(index>=size) return; // base case condn
    if(!((arr[index])&1)){
        cout<<arr[index]<<" ";
    }
    evenNos(arr,size,index+1);
}

int binarySearch(int arr[],int s,int e,int target){
int mid=s+((e-s)/2);
    if(s>e) return -1; //base case condn
    if(arr[mid]==target) return mid;

    if(arr[mid]>target){
        int ans = binarySearch(arr,s,mid-1,target);
        return ans;
    }
    if(arr[mid]<target){
        int ans = binarySearch(arr,mid+1,e,target);
        return ans;
    }
    return -1;
}
bool sortedArray(int arr[],int size,int index){
    if(index==size-1) return true;
    if(arr[index]>arr[index+1]) return false;
    return sortedArray(arr,size,index+1);
}
void reverse_digits(int num){
    if(num<=0) return ;
    int digit = num%10;
    cout<<digit<<" ";
    reverse_digits(num/10);
}
void digits(int num){
    if(num<=0) return ;
    int digit = num%10;
    digits(num/10);
    cout<<digit<<" ";
}
void ArrayToNum(int arr[],int size,int index){
    if(index>=size) return ;
    // int ans=0;
    // ans = arr[index] + ans*10;
    // cout<<ans;
    cout<<arr[index];
    ArrayToNum(arr,size,index+1);
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    // int *array = arr;
    int index=0;
    int size=7;
    int mini = INT_MAX;
    int maxi = INT_MIN;
    // printArray(arr,size,index);
    // cout<<endl;
    // reverseArray(arr,size);
    // cout<<searchArray(arr,size,index,9); // search in array
    // minArray(arr,size,index,mini);
    // cout<<mini<<endl;
    // maxArray(arr,size,index,maxi);
    // cout<<maxi;
    // oddNos(arr,size,index);
    // cout<<endl;
    // evenNos(arr,size,index);
    // int target = 9;
    // int s=0;
    // int e=6;
    // int ans = binarySearch(arr,s,e,target);
    // cout<<ans;
    // if(sortedArray(arr,size,index)){
    //     cout<<"TRUE :- ARRAY IS SORTED"<<endl;
    // }
    // else{
    //     cout<<"FALSE :- ARRAY IS UNSORTED"<<endl;
    // }
    // digits(423);
    // cout<<endl;
    // reverse_digits(423);
    // ArrayToNum(arr,size,index);
    return 0;
} 