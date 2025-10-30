// 🔍 C++ Searching and Finding Algorithms
// ✅ std::binary_search
// Purpose: Checks if a value exists in a sorted range.

// Returns: true or false

// Syntax:
// binary_search(v.begin(), v.end(), 10);

// 📍 std::lower_bound
// Purpose: Finds the first element ≥ (greater than or equal to) a given value in a sorted range.

// Returns: Iterator to the element.

// Syntax:

// auto it = lower_bound(v.begin(), v.end(), 10);

// 📈 std::upper_bound
// Purpose: Finds the first element > (strictly greater than) a given value in a sorted range.

// Returns: Iterator to the element.

// Syntax:
// auto it = upper_bound(v.begin(), v.end(), 10);

// 🔁 std::equal_range
// Purpose: Returns a pair of iterators:

// First → lower_bound

// Second → upper_bound
// i.e., the range of elements equal to a specific value.

// Syntax:
// auto range = equal_range(v.begin(), v.end(), 10);