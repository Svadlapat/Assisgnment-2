#include <iostream>
#include <string>

int main() {
    int a = 5; // Type is int and cannot be changed
    std::cout << "Value of a: " << a << std::endl;

    // The following line will cause a compile-time error
    // a = "hello"; // ERROR: invalid conversion from 'const char*' to 'int'

    // The following line will also cause a compile-time error
    // int result = 10 + "5"; // ERROR: invalid operands of types 'int' and 'const char [2]' to binary 'operator+'

    std::cout << "C++ prevents type mismatches at compile time." << std::endl;
    return 0;
}
