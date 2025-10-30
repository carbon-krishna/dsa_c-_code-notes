#include <iostream>
#include <string>

int main() {
    std::string numberStr = "123";// generally big programs prefer this 
    int number = 0;

    for (char c : numberStr) {
        number = number * 10 + (c - '0');
    }

    std::cout << "The number is: " << number << std::endl;
    return 0;
}