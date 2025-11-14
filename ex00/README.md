# Exercise 00: Start with a few functions

This directory contains the implementation of Exercise 00 from C++ Module 07, focusing on function templates.

## Overview

In this exercise, we implement three function templates:

1. **swap**: Swaps the values of two given parameters. This function does not return anything.
2. **min**: Compares two values and returns the smallest one. If they are equal, it returns the second one.
3. **max**: Compares two values and returns the greatest one. If they are equal, it returns the second one.

These functions can be called with any type of argument, provided that the two arguments have the same type and support all comparison operators.

## Files

- **inc/swap.hpp**: Contains the declarations of the function templates.
- **src/main.cpp**: Contains the main function that tests the functionality of the templates.
- **Makefile**: Contains the build instructions and compiler flags.

## Usage

To compile the project, navigate to the `ex00` directory and run:

```
make
```

This will generate an executable named `ex00`. You can then run the executable to see the results of the tests performed in `main.cpp`.

## Example Output

When running the program, you should see output similar to the following:

```
a = 3, b = 2
min(a, b) = 2
max(a, b) = 3
c = chaine2, d = chaine1
min(c, d) = chaine1
max(c, d) = chaine2
```

This demonstrates the functionality of the `swap`, `min`, and `max` functions with both integers and strings.
