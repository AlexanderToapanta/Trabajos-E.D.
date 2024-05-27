#ifndef MUL_M_H
#define MUL_M_H

#include <iostream>
#include <functional>
using namespace std;
template <typename T, typename U>
void Ingresar(U** p, T t,T rows, const string& prompt, std::function<U()> in);

template <typename T, typename U>
void Imprimir(U** p, T t,T rows,function<void(const U&)> print);

template <typename T, typename U>
void Proceso(U** pA, U** pB, U** pC, T rows, T cols, T current_row, T current_col, function<void(U**, U**, U**, T, T, T, T)> operacion);

#endif
