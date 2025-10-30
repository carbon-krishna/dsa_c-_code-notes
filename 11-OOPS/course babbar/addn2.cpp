#include <iostream>
using namespace std;
class Box {
public:
int length;
void setLength(int l) {
length = l;
}
void display() {
cout << "Length: " << length << endl;
}
};

// Function that takes an object by value (copy)
Box modifyByValue(Box b) {
b.length += 5; // modifies only the copy
return b; // returns modified copy
}

// Function that takes an object by address (pointer)
Box modifyByAddress(Box* b) {
b->length += 10; // modifies the original object
return *b; // returns modified object
}

int main() {
Box box1;
box1.setLength(10);

cout << "Original: ";
box1.display();

// Pass-by-value
Box box2 = modifyByValue(box1);

cout << "\nAfter modifyByValue (box2): ";
box2.display();

cout << "Original after pass-by-value: ";
box1.display();

// // Pass-by-address
Box box3 = modifyByAddress(&box1);

cout << "\nAfter modifyByAddress (box2): ";
box3.display();

cout << "Original after pass-by-address: ";
box1.display();

return 0;
}