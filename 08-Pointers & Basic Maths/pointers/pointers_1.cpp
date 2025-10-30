#include <iostream>

using namespace std;
int main(){
    // int xyz=15;
    // int pqr=12;
    // int *p1=&xyz;// pointer creation -> pointer to int
    // int *p2=&pqr;// stores address of pqr
    // cout<<xyz<<endl;
    // cout<<&xyz<<endl;// gives address of xyz
    // cout<<pqr<<endl;
    // cout<<&pqr<<endl;// gives address of pqr
    // // cout<<*xyz<<endl; this gives an error as *must be used before a pointer or address
    // // cout<<*pqr<<endl;
    // cout<<p1<<endl;
    // cout<<&p1<<endl;
    // cout<<*p1<<endl;
    // cout<<p2<<endl;
    // cout<<&p2<<endl;
    // cout<<*p2<<endl;
    // char ch = 'k';
    // char *cstar = &ch;
    // cout<<sizeof(p1)<<endl; // pointer stores address values so whether a char pointer or int pointer they both store address so both has same bytes
    // cout<<sizeof(cstar)<<endl;

    // int arr[] = {5,10,15,20,25};
    // cout<<arr; // this prints the base address of an array
    // pointer array creation
    // int *ptr = arr;
    // also arr[i] = i[arr] as 
    // arr[i] = *[arr+i]
    // i[arr] = *[i+arr] that's why they are equal
    // arr[0] = *[arr+0] = *[arr] = 5 -> let *arr = 104
    // arr[2] = *[arr+2] = *[arr+(2x4)] as data type int and 1 int is 4bytes =*[arr+8]=*[112]
    // = 15
    // cout<<arr<<endl;// gives base address of array
    // cout<<ptr<<endl;// gives base address of array
    // cout<<&arr<<endl;// gives base address of array
    // cout << ptr<<endl;     // Address of arr[0] (same as arr)
    // cout << &ptr<<endl;    // Address where ptr variable is stored
    // cout << *ptr<<endl;    // Value at arr[0] (which is 10)

    char ch[100] = "babbara";
    char *ctr=ch;
    cout<<ch<<endl;
    cout<<&ch<<endl;
    cout<<&ch[0]<<endl;
    cout<<ch[0]<<endl;
    cout<<*ch<<endl;
    cout<<ctr<<endl;
    cout<<&ctr<<endl;
    cout<<*ctr<<endl;
    cout<<*(ctr+4)<<endl;
    return 0;
}