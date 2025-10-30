// 1. **Debug the code. Take input a character, print 1, if its a capital  alphabet, print 0, if its a lowercase alphabet, else print -1.**
// problem solved as in qn had used || i just replaced || by && and boom soln is working 
// problem

// #include<iostream>
// using namespace std;

// int main() {
// 	char c;
//     cin>>c;
//     if('a'<=c || c<= 'z'){
//         cout<<0;
//     }
// 	else if('A'<=c || c<= 'Z'){
//         cout<<1;
//     }
//     else{
//         cout<<-1;
//     }
// }
//soln
#include<iostream>
using namespace std;

int main() {
	char c;
    cin>>c;
    if('a'<=c && c<= 'z'){
        cout<<0;
    }
	else if('A'<=c && c<= 'Z'){
        cout<<1;
    }
    else{
        cout<<-1;
    }
}