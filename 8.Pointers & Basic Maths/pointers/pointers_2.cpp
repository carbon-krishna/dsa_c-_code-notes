#include <bits/stdc++.h>

using namespace std;
int main(){
    // int arr[50];
    // cout<< arr+1<<endl;
    // cout<< &arr + 1<<endl;
    // array of pointers
    // int *arr[10];
    // int a = 1;
    // arr[0] = &a;
    // cout<<arr[0]<<endl;
    // cout<<*arr[0]<<endl;

    //pointer to an array
    int arr[3] = {10,20,30};
    int (*ptr)[3] = &arr;
    cout<<"arr: "<<arr<<endl;
    cout<<"&arr: "<<&arr<<endl;
    cout<<"ptr: "<<ptr<<endl;
    cout<<"*ptr: "<<*ptr<<endl;
    cout<<"(*ptr)[0]: "<<(*ptr)[0]<<endl;
    cout<<"(*ptr)[1]: "<<(*ptr)[1]<<endl;
    cout<<"(*ptr)[2]: "<<(*ptr)[2]<<endl;
    cout<<"arr+1: "<<arr+1<<endl;
    cout<<"*ptr+1: "<<*ptr+1<<endl;
    cout<<"*(ptr+1): "<<*(ptr+1)<<endl;
    cout<<"ptr+1: "<<ptr+1<<endl;
    cout<<"arr+3: "<<arr+3<<endl;
    // ptr -- > address of complete array
    // *ptr -- > address of strating of array block
    // &arr -- > base address of complete array
    // arr -- > address of strating of array block
    return 0;
}