#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

/**
 * Array.hpp
 *
 * Breve explicación sobre la plantilla de clase Array<T>:
 *
 * Array es una plantilla de clase que encapsula un array dinámico de
 * elementos de tipo T. Las definiciones de los métodos de la plantilla
 * deben estar visibles en el punto de instanciación, por eso la
 * implementación se coloca en el archivo "Array.tpp" e incluimos
 * dicho archivo al final del header.
 */

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