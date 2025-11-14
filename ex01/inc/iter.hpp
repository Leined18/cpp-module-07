#ifndef ITER_HPP
#define ITER_HPP

/**
 * iter.hpp
 *
 * Breve explicación sobre la función plantilla iter:
 *
 * iter aplica una función pasada como parámetro a cada elemento de un
 * array. La plantilla se declara con un parámetro de tipo T, que representa
 * el tipo de los elementos del array. La función que se pasa puede aceptar
 * T& o const T& según se necesite. Al implementar iter como plantilla en
 * el header, se garantiza que el compilador pueda instanciarla para los
 * tipos usados en tiempo de compilación.
 */

template <typename T>
void iter(T* array, const unsigned int length, void (*func)(T&)) {
    for (unsigned int i = 0; i < length; ++i) {
        func(array[i]);
    }
}

#endif // ITER_HPP