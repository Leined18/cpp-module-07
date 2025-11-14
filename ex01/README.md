# Exercise 01: Iter

## Overview
Exercise 01 focuses on implementing a function template named `iter`. This function template is designed to operate on arrays of any type, allowing users to apply a specified function to each element of the array.

## Functionality
The `iter` function template takes three parameters:
1. A pointer to the first element of an array.
2. The length of the array, passed as a constant value.
3. A function that will be called on each element of the array.

This design allows for flexibility in applying various operations to the elements of the array, making it a powerful tool for generic programming.

## Usage
To use the `iter` function template, include the `iter.hpp` header file in your source code. You can then call the `iter` function, passing in the array, its length, and the function you wish to apply.

### Example
Here is a simple example of how to use the `iter` function:

```cpp
#include "iter.hpp"
#include <iostream>

void print(int &n) {
    std::cout << n << " ";
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);

    iter(arr, length, print);
    return 0;
}
```

In this example, the `print` function is applied to each element of the `arr` array, resulting in the output of each element.

## Conclusion
The `iter` function template enhances the modularity and reusability of code by allowing operations to be performed on arrays of any type. This exercise serves as a practical introduction to function templates and generic programming in C++.