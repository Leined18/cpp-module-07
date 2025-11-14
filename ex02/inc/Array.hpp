#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array {
private:
    T* _array;
    unsigned int _size;

public:
    Array(); // Default constructor
    Array(unsigned int n); // Constructor with size
    Array(const Array& other); // Copy constructor
    Array& operator=(const Array& other); // Assignment operator
    ~Array(); // Destructor

    T& operator[](unsigned int index); // Subscript operator
    const T& operator[](unsigned int index) const; // Const subscript operator
    unsigned int size() const; // Size getter
};

#include "Array.tpp"

#endif // ARRAY_HPP