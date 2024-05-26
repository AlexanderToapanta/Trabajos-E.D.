#ifndef CALCULARDENSIDAD_H
#define CALCULARDENSIDAD_H

#include <iostream>
#include <functional>
using namespace std;

template <typename T>
void Ingreso(T& m, T& v);

template <typename T>
T Cal_densidad(T m, T v,function<T(T,T)> d);

template <typename T>
void Im_Resultado(T d, function<void(T)> imprimir);

#endif