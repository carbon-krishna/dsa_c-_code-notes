// In head recursion, the recursive call is made first i.e., at the beginning of the function, and no computations take place before making the recursive call. This means there is work that can be done only after the recursive method has returned. It's the opposite of tail recursion where the recursive call is the last operation of the function.

// Understanding the recursive call stack is important because it helps you recognize that each recursive call adds a new frame onto the call stack. This consumes stack memory, which is limited. Exceeding this limit with too many recursive calls can lead to a stack overflow error. The stack tracks the state of each function call, including local variables and execution point.

#include <iostream>
using namespace std;
int factorial(int n) {
    if (n == 0) return 1;   // base case
    int recKaAns = factorial(n - 1); // recursive call with smaller input
    int ans = n * recKaAns;
    return ans;
}
int power(int n) {
    if (n == 0) return 1;   // base case
    int recKaAns = power(n - 1); // recursive call with smaller input
    int ans = 2 * recKaAns;
    return ans;
}
void counting(int n) {
    if (n == 0) return ;   // base case
    counting(n - 1); // recursive call with smaller input
    cout<<n<<" ";
}
void printBabbar(int n){
    if(n==0) return;
    // printBabbar(n-1);
    cout<<"Babbar"<<" ";
    printBabbar(n-1);
}
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    int fib1 = fibonacci(n-1);
    int fib2 = fibonacci(n-2);
    return fib1+fib2;
}

int main(){
    int n=5;
    // cout << "Factorial of " << n << " is " << factorial(n) << endl;
    // cout << n << "th power of 2 is " << power(n) << endl;
    // counting(n);
    // printBabbar(n);
    cout<<fibonacci(12);
    return 0;
}