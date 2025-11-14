#include <iostream>
#include "swap.hpp"

// Exercise 00: This exercise demonstrates the use of function templates to create generic functions that can operate on different data types. The swap function exchanges the values of two variables, while min and max return the smallest and largest values, respectively, using template parameters.

int main(void) {
    int a = 2;
    int b = 3;
    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
    std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

    std::string c = "chaine24";
    std::string d = "chaine23";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
    std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

    return 0;
}