// sum of array
// #include<iostream>
// using namespace std;

// int main(){
//     int n, sum=0;// sum=0;
//     cin >> n;
//     int input[n]; //int input[n];
//     for(int i=0;i<n;i++){
//         cin >> input[i]; // cin >> input[0];
//     }
//      for(int i=0; i<n; i++){
//          sum = sum + input[i];
//      }
//     cout << sum << endl;
//     return 0;
// }

// linear serach
#include<iostream>
using namespace std;
void linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            cout<<i;
        }
    }
}