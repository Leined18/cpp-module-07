# C++ Module 07 - C++ Templates

## Overview
This repository contains the exercises for Module 07 of the C++ curriculum, focusing on C++ templates. The exercises are designed to enhance understanding of function templates and class templates, as well as their practical applications.

## Exercises

### Exercise 00: Function Templates
- **Directory**: `ex00/`
- **Description**: This exercise implements function templates for `swap`, `min`, and `max`. These functions allow for swapping values and finding the minimum and maximum of two parameters of the same type.
- **Key Files**:
  - `inc/swap.hpp`: Header file containing the function templates.
  - `src/main.cpp`: Main function to test the templates.

### Exercise 01: Iteration Template
- **Directory**: `ex01/`
- **Description**: This exercise implements a function template `iter` that applies a given function to each element of an array.
- **Key Files**:
  - `inc/iter.hpp`: Header file defining the `iter` function template.
  - `src/main.cpp`: Main function to test the `iter` function.

### Exercise 02: Array Class Template
- **Directory**: `ex02/`
- **Description**: This exercise implements a class template `Array` that encapsulates an array of type `T`, providing functionalities such as construction, copy assignment, and element access.
- **Key Files**:
  - `inc/Array.hpp`: Header file defining the `Array` class template.
  - `inc/Array.tpp`: Implementation of the member functions of the `Array` class template.
  - `src/main.cpp`: Main function to test the `Array` class.

## Build Instructions
Each exercise contains a `Makefile` that specifies the compilation rules and flags. To build the project, navigate to the respective exercise directory and run:

```bash
make
```

## Contribution
Feel free to contribute to this project by adding new exercises or improving existing ones. Ensure that all code adheres to the specified guidelines and standards.

## License
This project is licensed under the MIT License. See the LICENSE file for more details.
