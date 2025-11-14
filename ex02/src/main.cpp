#include <iostream>
#include "Array.hpp"

int main() {
    Array<int> intArray(5);
    for (unsigned int i = 0; i < intArray.size(); ++i) {
        intArray[i] = i * 10;
    }

    std::cout << "Integer Array:" << std::endl;
    for (unsigned int i = 0; i < intArray.size(); ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    try {
        std::cout << "Accessing out of bounds: " << intArray[10] << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    Array<std::string> stringArray(3);
    stringArray[0] = "Hello";
    stringArray[1] = "World";
    stringArray[2] = "!";

    std::cout << "String Array:" << std::endl;
    for (unsigned int i = 0; i < stringArray.size(); ++i) {
        std::cout << stringArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}