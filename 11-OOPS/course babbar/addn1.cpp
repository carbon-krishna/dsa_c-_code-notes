#include <iostream>
using namespace std;

// First namespace
namespace LibraryA {
    int value = 10;

    void display() {
        cout << "LibraryA value: " << value << endl;
    }
}

// Second namespace
namespace LibraryB {
    int value = 20;

    void display() {
        cout << "LibraryB value: " << value << endl;
    }
}

int main() {
    // Accessing variables and functions from LibraryA
    cout << "Accessing LibraryA:" << endl;
    cout << "Value: " << LibraryA::value << endl;
    LibraryA::display();

    // Accessing variables and functions from LibraryB
    cout << "\nAccessing LibraryB:" << endl;
    cout << "Value: " << LibraryB::value << endl;
    LibraryB::display();

    return 0;
}
