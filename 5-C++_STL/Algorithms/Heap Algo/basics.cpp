// 🧱 C++ Heap Algorithms (Header: <algorithm>)
// 🏗️ std::make_heap
// Purpose: Converts a range into a max-heap.

// Syntax:

// make_heap(v.begin(), v.end());

// ➕ std::push_heap
// Purpose: Adds a new element to a max-heap and maintains heap property.

// Note: Add the element at the end of the container first, then call push_heap.

// Syntax:

// v.push_back(40);
// push_heap(v.begin(), v.end());

// ➖ std::pop_heap
// Purpose: Removes the largest element from a max-heap.

// Note: Moves the largest to the end, but does not delete it — you must pop_back() manually.

// Syntax:

// pop_heap(v.begin(), v.end());
// v.pop_back();

// 🔃 std::sort_heap
// Purpose: Sorts a max-heap into ascending order.

// Syntax:

// sort_heap(v.begin(), v.end());
