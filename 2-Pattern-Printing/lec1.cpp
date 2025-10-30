#include <iostream>
using namespace std;

//global variable
//int a = 5;

void printBabbar() {
  cout << "My Name is Babbar" << endl;
}

void checkEvenOdd(int num) {

  //to check even, logic %2 == 0 -> even else odd
  if(num % 2 == 0) {
    cout << "Even Number" << endl;
  }
  else {
    cout << "Odd Number" << endl;
  }

}

void checkPositiveOrNegativeOrZero(int num) {
  if(num > 0) {
    cout << "positive" << endl;
  }
  else if(num < 0) {
    cout << "Negative" << endl;
  }
  else {
    cout << "Zero" << endl;
  }
}


//lets find the average of 3 numbers

int printAverage(int a, int b, int c) {
  int average = (a+b+c)/3;
  return average;
}

//lets waf that print counting from 1 to n 
void printCounting(int n) {
  for(int i=1; i<=n; i++) {
    cout << i << " ";
  }
  cout << endl;
}

void printTable(int num) {

  for(int i=1; i<=10; i++) {
    cout << (num*i) << endl;
  }

}

//waf that convert a upper case character into a loweer casxe character
void convertToLC(char ch) {
  char ans = ch - 'A' + 'a';
  cout << "Lower case character: " << ans << endl;
}

void convertToUC(char ch) {
  char ans = ch - 'a' + 'A';
  cout << "Upper case character: " << ans << endl;
}


int main() {

  //function call
  //printBabbar();
  //checkEvenOdd(16);
  //checkPositiveOrNegativeOrZero(0);
  // int answer = printAverage(10,20,30);
  // cout << "answer : " << answer << endl;
  //printCounting(10);
  //printTable(2);
  //convertToLC('Z');
  convertToUC('k');

  // //local variable
  // int a = 6;
  // //cout << a << endl;
  // {
  //   //block-scope variable
  //   int a = 7;
  //   cout << a << endl;
  // }

  // int a = 5;
  // {
  //   int a = 6;
  //   //cout << a;
  // }
  // cout << a << " ";
  return 0;
}

// In C++, passing by value creates a copy of the arguments, therefore changes do not affect the original variable. Pass by reference allows the function to modify the argument used to call the function.

// A function definition in C++ provides the actual body of a function including its code block where specific operations are carried out, unlike a function declaration which only specifies the function signature.

// Pass by Value vs. Pass by Reference
// The subtle differences between pass by value and pass by reference were underscored. Pass by value copies data, maintaining the original variable’s integrity but consuming more memory. Conversely, pass by reference allows direct manipulation of the variable, saving time and space but necessitating caution regarding unintended side effects:

// void passByValue(int a) {
//    a += 5;
// }

// void passByReference(int &a) {
//    a += 5;
// }