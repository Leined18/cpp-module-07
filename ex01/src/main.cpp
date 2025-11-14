#include <iostream>
#include "iter.hpp"

void printElement(int &element) {
    std::cout << element << " ";
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    const int length = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array elements: ";
    iter(arr, length, printElement);
    std::cout << std::endl;

    return 0;
}