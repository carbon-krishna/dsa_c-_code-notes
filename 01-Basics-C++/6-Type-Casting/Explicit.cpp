// Explicit Typecasting
// Explicit Typecasting, or manual type conversion, requires the programmer to explicitly specify the conversion. This is done using operators or functions and is necessary when converting a larger data type to a smaller one or converting between incompatible types.

// Example:
// double b = 9.99;
// int a = static_cast<int>(b); // Explicit conversion using static_cast

// In this example, b is cast from double to int, which truncates the decimal part.

// Important Pointers to Keep in Mind
// Data Loss: Be cautious of possible data loss during explicit typecasting, especially when converting from a larger type to a smaller type.
// Compiler Warnings: Pay attention to compiler warnings for unexpected conversions.
// Precision Issues: Converting floating-point numbers to integers will result in loss of precision.
// For more detailed information and a comprehensive understanding, it's highly recommended to watch the correlating instructional video linked in the course materials.

// Code Examples
// Let's consider a few scenarios where typecasting is applied:
// // Mixed-type arithmetic
// int intVal = 8;
// float floatVal = 5.5;
// float result = intVal + floatVal; // Implicit conversion of intVal to float

// // Explicitly converting a double to an int
// double pi = 3.14159;
// int truncatedPi = static_cast<int>(pi); // 3