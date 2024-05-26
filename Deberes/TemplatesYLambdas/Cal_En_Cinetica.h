#ifndef CALCULARENCINETICA_H
#define CALCULARENCINETICA_H

#include <iostream>
#include <functional>
using namespace std;

template <typename T>
void Ingreso(T& m, T& v);

template <typename T>
T Cal_En_cinetica(T m, T v,function<T(T,T)> Ek);

template <typename T>
void Im_Resultado(T Ek, function<void(T)> imprimir);

#endif