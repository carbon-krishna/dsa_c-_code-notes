#include <bits/stdc++.h>
using namespace std;

void Merge2SortedArrays(int arr1[],int size1,int arr2[],int size2,vector<int> &output){
    int i=0;
    int j=0;
    // step 2 
    while(i<size1 && j<size2){
        if(arr1[i] < arr2[j]){
            output.push_back(arr1[i]);
            i++;
        }
        else{
            output.push_back(arr2[j]);
            j++;
        }
    }
    while(i<size1){
        output.push_back(arr1[i]);
        i++;
    }
    while(j<size2){
        output.push_back(arr2[j]);
        j++;
    }
}
void merge(int arr[],int s,int e,int mid){
    //create copy of left and right sorted array
    int leftArrayLength = mid-s+1;
    int rightArrayLength = e-mid;

    int* arr1 = new int[leftArrayLength];
    int* arr2 = new int[rightArrayLength];

    int mainArrayIndex = s;
    for(int i=0;i<leftArrayLength;i++){
        arr1[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }
    mainArrayIndex = mid+1;
    for(int i=0;i<rightArrayLength;i++){
        arr2[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }
    // merge sorted array logic into the original array
    int i=0;// arr1
    int j=0;// arr2
    mainArrayIndex = s;//arr
    while(i<leftArrayLength && j<rightArrayLength){
        if(arr1[i] < arr2[j]){
            arr[mainArrayIndex]=arr1[i];
            i++;
            mainArrayIndex++;
        }
        else{
            arr[mainArrayIndex]=arr2[j];
            j++;
            mainArrayIndex++;
        }
    }
    while(i<leftArrayLength){
        arr[mainArrayIndex]=arr1[i];
            i++;
            mainArrayIndex++;
    }
    while(j<rightArrayLength){
        arr[mainArrayIndex]=arr2[j];
            j++;
            mainArrayIndex++;
    }
    delete[] arr1;
    delete[] arr2;
}
void mergeSort(int arr[],int s,int e){
    // base case
    if(s>=e){
        return;
    }
    // ek bade array mein divide karte the 2 part mein
    int mid = (s+e)/2;
    // left part ko recursion seh solve karwate the
    mergeSort(arr,s,mid);
    // fir right part ko recursion seh solve karwate the
    mergeSort(arr,mid+1,e);
    // recursion neh joh sorted arrays diyeh hain usko merge karte hain
    merge(arr,s,e,mid);
}
int main(){
    // int arr1[] = {10,20,30,40};
    // int size1 = 4;
    // int arr2[] = {15,25,35,45};
    // int size2 = 4;
    // vector<int> output;
    // Merge2SortedArrays(arr1,size1,arr2,size2,output);
    // for(int i=0;i<size1+size2;i++){
    //     cout<<output[i]<<",";
    // }
    int arr[]={7,2,4,3,1,5};
    int size = 6;
    int start = 0;
    int end = size-1;
    mergeSort(arr,start,end);
    cout<<"printing the sorted array : "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}