#ifndef CALCULARVELOCIDAD_H
#define CALCULARVELOCIDAD_H

#include <iostream>
#include <functional>
using namespace std;

template <typename T>
void Ingreso(T& x, T& t);

template <typename T>
T Cal_velocidad(T x, T t, function<T(T,T)> v);

template <typename T>
void Im_Resultado(T v, function<void(T)> imprimir);

#endif