// Vectors:-
// 1) Dynamic array that can grow or shrink in size.
// 2) allow fast random access to elements.
// 3)insertion &removal of elements at the end is efficient.
// 4) suitable for most scenarios when elements needed to stored in a linear sequence . 

#include <iostream>
#include <vector>
using namespace std;
int main(){
    // creation
    vector<int> yoyo;
    //
    vector<int> marks;
    marks.reserve(10); // Requests that vector capacity be increased to atleast n elements potentially reducing the number of reallocations .
    

    marks.push_back(2); // Adds an element to the end of the vector
    marks.push_back(3);
    marks.push_back(4);
    marks.insert(marks.begin(), 6);

    cout<<*(marks.begin())<<endl; // * gives out the value at that iterator
    cout<<marks.at(2)<<endl; // accesses the element at the specified index with bounds checking
    
    cout<<marks.max_size()<<endl; // returns the maximum no. of elements that the vector can hold due to system or library limitations

    
    cout<< marks[1]<<endl; // or u can use square brackets

    cout<< marks.size()<<endl; // tells us about blocks filled 

    cout<< marks.capacity()<<endl; // tells about total space

    marks.pop_back(); // last added element is removed from the vector 

    cout<< marks.size()<<endl;

    cout<<marks.front()<<endl; // gets front element of the vector
    cout<<marks.back()<<endl; // gets last element of the vector
    marks.erase(marks.begin(),marks.end());
    cout<<marks.size()<<endl;

    vector<int> miles; // capacity but this is dynamic and can double if it fills

    if(miles.empty()){
         cout << "The vector is empty."<<endl;}
         //Returns true if the container has 0 elements
        // Returns false if the container has 1 or more elements

    vector<int> distances(15,0); // fills all the 15 place with zero
    distances.clear(); // removes all the elements in the vector 
    if(distances.empty()){
        cout<< "The vector is empty."<<endl;
    }
    return 0;
}