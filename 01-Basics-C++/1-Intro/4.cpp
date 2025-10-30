// condition ? true_expression : false_expression;
// expression for ternary operator
#include <iostream>

int main() {
    int a = 10, b = 20;

    // Example 1: Basic Ternary Operator
    int max = (a > b) ? a : b;
    std::cout << "The maximum value is: " << max << std::endl;
    
    // Example 2: Nested Ternary Operator
    std::string result = (a == b) ? "Equal" : (a > b) ? "A is greater" : "B is greater";
    std::cout << "Comparison result: " << result << std::endl;
    
    return 0;
}