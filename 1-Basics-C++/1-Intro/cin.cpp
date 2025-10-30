#include <iostream>
#include <string>

int main() {
    std::string fullName;
    std::cout << "Enter your full name: ";
    std::getline(std::cin, fullName);
    std::cout << "Hello, " << fullName << "!" << std::endl;
    return 0;
}
// H.W.
// cin.ignore-->>
// cin.fail
// getline(cin,10)
// instead of using namespace std use std:: every time , generally std:: is preferd in long and large programs
// In C++, the :: operator is known as the scope resolution operator. It is used to define the context in which a member of a class or a namespace is defined. Here are some common uses of the scope resolution operator:
/*
Accessing Class Members: It is used to access static members of a class or to define a function outside the class definition.

Example:

class MyClass {
public:
    static int staticVar;
    void memberFunction();
};

int MyClass::staticVar = 0; // Define static member outside the class
void MyClass::memberFunction() {
    // Function definition outside the class
}
Accessing Namespaces: It is used to access a member of a namespace.

Example:

namespace MyNamespace {
    int value = 10;
}

int main() {
    int x = MyNamespace::value; // Accessing value from MyNamespace
    return 0;
}
Global Scope Access: It can be used to access a global variable when there is a local variable with the same name.

Example:

int value = 5; // Global variable

int main() {
    int value = 10; // Local variable
    std::cout << ::value; // Access global variable, outputs 5
    return 0;
}
The scope resolution operator is a powerful tool in C++ that helps manage and organize code, especially in large projects with multiple classes and namespaces. 
*/

switch (expression)
{
case constant expression:
    /* code */
    break;

default:
    break;
}