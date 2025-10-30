/* Member Fxns 
begin() :- Returns an iterator pointing to the first element in the vector

end() :- Returns an iterator pointing to the position just after the
last element in the vector .

size() :- Returns the no. of elements in the vector

empty() :- Checks if the vector is empty(i.e whether its size is 0)

capacity() :- Returns the number of elements that the vector can hold before needing to allocate more space .

reserve(size_type n) :- Requests that the vector capacity be increased to atleast n elements potentially reducing the number of reallocations .

Push_back() :- Adds an element to the end of the vectors .

pop_back() :- Last added element is removed .

front() :- gets front element of the vector/list/,,etc.

back() :- gets last element of the vector .

at() :- accesses the element at the specified index with bounds checking .
marks.at() = marks[]

swap :- Swaps the contents of the vector with those of another vector of another vector of the same type , including their size & capacities.
// first.swap(second) here first and second are vectors and we replace contents of first with second .

reserve(size_type n) :- Requests that the vector capacity be increased to at least n elements , potentially reducing the no. of reallocations . 

max_size() :- Returns the maximum no of elements that the vector can hold due to system of library limitations

clear() :- Removes all the elements in the vector .

insert(iterator position,value) :- Inserts a new element before the specified position in the vector . 

erase(iterator position) or erase(iterator first , iterator last) :- Removes one or more elements from the vector starting at the specified position .

*/