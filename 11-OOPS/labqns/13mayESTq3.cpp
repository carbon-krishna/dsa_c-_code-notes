#include <iostream>
using namespace std;

// Template class num with private data member
template <class T>
class num {
private:
    T number;  // Private template type data member

public:
    // Function to input the value of data member number at runtime
    void input() {
        cout << "Enter value: ";
        cin >> number;
    }
    
    // Public member function to display the sum as output
    void show() {
        cout << "Result: " << number << endl;
    }
    
    // Overloaded + operator for performing addition of two template based class objects
    num operator+(const num& obj) {
        num temp;
        temp.number = this->number + obj.number;
        return temp;
    }
};

// Main function
int main() {
    cout << "=== Addition of two objects with int data type ===" << endl;
    
    // Creating objects with int data type
    num<int> obj1, obj2, result1;
    
    cout << "For first object:" << endl;
    obj1.input();
    
    cout << "For second object:" << endl;
    obj2.input();
    
    // Addition of two objects having data type int
    result1 = obj1 + obj2;
    result1.show();
    
    cout << "\n=== Addition of two objects with double data type ===" << endl;
    
    // Creating objects with double data type
    num<double> obj3, obj4, result2;
    
    cout << "For first object:" << endl;
    obj3.input();
    
    cout << "For second object:" << endl;
    obj4.input();
    
    // Addition of two objects having data type double
    result2 = obj3 + obj4;
    result2.show();
    
    return 0;
}