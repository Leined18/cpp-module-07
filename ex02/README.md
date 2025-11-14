# Exercise 02: Array

## Overview
This exercise focuses on implementing a class template `Array` that allows for the creation and manipulation of an array of elements of type `T`. The class provides various functionalities, including construction, copy assignment, and element access.

## Features
- **Dynamic Array Creation**: The `Array` class can be constructed with a specified size, creating an array of that size initialized with default values.
- **Copy Constructor and Assignment Operator**: The class supports deep copying, ensuring that modifications to one instance do not affect another.
- **Element Access**: Elements can be accessed using the subscript operator `[]`, with bounds checking to prevent accessing out-of-bounds elements.
- **Size Functionality**: A member function `size()` returns the number of elements in the array.

## Usage
To use the `Array` class, include the header file `Array.hpp` in your source code. You can create an instance of `Array`, access its elements, and utilize its functionalities as demonstrated in the provided `main.cpp` file.

## Example
```cpp
Array<int> intArray(5); // Creates an array of 5 integers
intArray[0] = 10; // Set the first element
std::cout << "Size of array: " << intArray.size() << std::endl; // Outputs the size
```

## Compilation
To compile the project, use the provided `Makefile` in the `ex02` directory. Ensure that you have the necessary compiler flags set as specified in the Makefile.

## Notes
- Ensure that you handle exceptions when accessing elements out of bounds.
- The implementation must adhere to the C++98 standard, and no external libraries are allowed.