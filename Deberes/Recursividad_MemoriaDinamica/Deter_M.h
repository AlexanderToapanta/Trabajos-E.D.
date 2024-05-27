#ifndef DETER_M_H
#define DETER_M_H

#include <iostream>
#include <functional>
#include <vector>
#include <cmath>

template <typename T, typename U>
void Ingresar(U** p, T t, T rows, const std::string& prompt, std::function<U()> in);

template <typename T, typename U>
void Imprimir(U** p, T t, T rows, std::function<void(const U&)> print);

template <typename T, typename U>
U Determinante(U** p, T size);

#endif
