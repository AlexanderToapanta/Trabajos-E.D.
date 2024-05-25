#ifndef MATRIZ_H
#define MATRIZ_H

#include <iostream>
#include <functional>
using namespace std;

template <typename T, typename U>
void Ingresar(U* p, T t, std::function<U()> gen);

template <typename T, typename U>
void Imprimir(U* p, T t, std::function<void(const U&)> print);

template <typename T, typename U>
void Proceso(U* p, T t, std::function<U(U)> operacion);




#endif