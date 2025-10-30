// 🔢 Numeric Algorithms (C++ STL)
// 🧮 std::accumulate
// Purpose: Computes the sum of elements in a range.

// Header: <numeric>

// Usage: accumulate(begin, end, initial_value)

// ✅ Example:-

// vector<int> v = {1, 2, 3};
// int sum = accumulate(v.begin(), v.end(), 0); // sum = 6

// 🔗 std::inner_product
// Purpose: Computes the inner (dot) product of two ranges.

// Usage: inner_product(first1, last1, first2, init)

// ✅ Example:

// vector<int> a = {1, 2, 3};
// vector<int> b = {4, 5, 6};
// int result = inner_product(a.begin(), a.end(), b.begin(), 0); // 1*4 + 2*5 + 3*6 = 32

// ➕ std::partial_sum
// Purpose: Computes partial sums of elements in a range.

// Usage: partial_sum(begin, end, output_begin)

// ✅ Example:

// vector<int> v = {1, 2, 3};
// vector<int> result(3);
// partial_sum(v.begin(), v.end(), result.begin()); // result = {1, 3, 6}

// 🔢 std::iota
// Purpose: Fills a range with incrementing values starting from a given number.

// Usage: iota(begin, end, start_value)

// ✅ Example:

// vector<int> v(5);
// iota(v.begin(), v.end(), 1); // v = {1, 2, 3, 4, 5}
