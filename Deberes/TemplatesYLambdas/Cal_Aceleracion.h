#ifndef CALCULARACELERACION_H
#define CALCULARACELERACION_H

#include <iostream>
#include <functional>
using namespace std;

template <typename T>
void Ingreso(T& V, T& t,T& V_i);

template <typename T>
T Cal_aceleracion(T V, T t,T V_i,function<T(T,T,T)> a);

template <typename T>
void Im_Resultado(T a, function<void(T)> imprimir);

#endif