// q1 Debug the code. This code is trying to calculate area of a rectangle.
// #include<iostream>
// using namespace std;
// int main() {
// 	double width, height;
// 	cin >> width >> height;
// 	int area = width * height;
// 	cout << area << endl;
// 	return 0;
// }
//q2 Debug the code. Convert Binary to Decimal.
// #include<iostream>
// using namespace std;
// int main() {
//     int n,sum=0,factor=1;
//     cin>>n;
//     while(n!=0){
//         int digit = n%10; here it was n/10 i changed into n%10
//         sum = sum + digit*factor;
//         factor = 2*factor;
//         n = n/10; here it was n%10 i changed itno n/10
//     }
//     cout<<sum;
//     return 0;
// }
//q3 Debug the code. Print all the prime numbers that lie in the range 2 to N (both inclusive)
// #include<iostream>
// using namespace std;
// int main(){
//     int n, flag=1;
//     cin>>n;
//     for(int i=2;i<=n;i++){
//         flag = 1;
//         for(int j=2;j<=i/2;j++){
//             if(i%j==0){
//                 flag = 0;
//             }
//         }
//         if(flag==1){
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }
//q4 Debug the code. Print reverse of a number.
// #include<iostream>
// using namespace std;
// int main() {
// 	int n,a=0;
// 	cin>>n;
//     int z = n,digits=0;
//     while(z!=0){
//         z = z/10;
//         digits++;
//     }
//     while(n!=0){
//         int k = n%10,z=digits;
//         while(z != 0){
//             k = k*10;
//             z--;
//         }
//         a = a + k;
//         digits--;
//         n = n/10;
//     }
//     cout<<a/10;
//     return 0;
// }
// q5 Debug the code. Return true if the number is member of fibonacci series else false.
// #include<iostream>
// using namespace std;
// bool checkMember(int n){
//     int f1 = 0, f2 = 1;
//     if(n==0 || n==1){
//         return true;
//     }
//     else{
//         while(1){
//             int temp = f1 + f2;
//             f1 = f2;
//             f2 = temp;
//             if(temp==n){
//                 return true;
//             }
//             else if(temp>n){
//                 return false;
//             }
//         }
//     }

// }
// int main(){
//     bool x = checkMember(34);
//     cout<<x;
//     return 0;
// }
/* q6 Debug the code. Correct the code for printing the pattern.
Pattern for N = 4
   1
  212
 32123
4321234
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=0,gaps = n-1;
//     while(i<n){
//         int k=0,gaps=n-1-i;
//         while(k<gaps){
//             cout<<" ";
//             k++;
//         }
//         int num = i+1;
//         while(num>0){
//             cout<<num;
//             num = num - 1;
//         }
//         k = 2;
//         while(k<=(i+1)){
//             cout<<k;
//             k++;
//         }
//         k =0;
//         while(k<gaps){
//             cout<<" ";
//             k++;
//         }
//         i++;
//         cout<<"\n";
//     }
// }
/* q7 Debug the code. Correct the code for printing the pattern.
Pattern for N = 5
1234554321
1234**4321
123****321
12******21
1********1
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=0;
//     while(i<n){
//         int count = n-i,k=1;
//         while(k<=count){
//             cout<<k;
//             k++;
//         }
//         count = n-i;
//         int stars = 2*i;
//         while(stars>0){
//             cout<<"*";
//             stars--;
//         }
//         count = n-i;
//         while(count>0){
//             cout<<count;
//             count--;
//         }
//         cout<<"\n";
//         i++;
//     }
// }
// q8 Debug the code. Find the second largest in the code.
// #include<iostream>
// #include <climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int max = INT_MIN;
//     for(int i=0;i<n;i++){
// 	    if(max<arr[i]){
// 	      max=arr[i];
//       }
//      }
//      int second = INT_MIN;
//      for(int i=0;i<n;i++){
// 	     if(max>arr[i] && arr[i]>second){
// 	       second = arr[i];
//        }
//      }
//      cout<<second;
// 		 return 0;
// }
/* q9
Pattern for N = 4
4444
333
22
1
*/
// #include<iostream>
// using namespace std;
// int main(){
//   int i,j,n;
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for(j=i;j<=n;j++){
//             cout<<n-i+1;
//         }
//         cout<<endl;
//     }
// }