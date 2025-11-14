#ifndef SWAP_HPP
#define SWAP_HPP

/**
 * swap.hpp
 *
 * Breve explicación sobre plantillas de función (templates):
 *
 * Las plantillas permiten definir funciones genéricas que pueden operar
 * con distintos tipos. Aquí definimos tres funciones plantilla:
 *  - swap<T>(T&, T&): intercambia dos valores
 *  - min<T>(const T&, const T&): devuelve el menor (si son iguales, el segundo)
 *  - max<T>(const T&, const T&): devuelve el mayor (si son iguales, el segundo)
 *
 * Estas funciones se implementan en el header porque las plantillas deben
 * estar visibles al compilador cuando se instancien con tipos concretos.
 */

template <typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
T min(const T &a, const T &b) {
    return (a < b) ? a : b;
}

template <typename T>
T max(const T &a, const T &b) {
    return (a > b) ? a : b;
}

#endif // SWAP_HPP