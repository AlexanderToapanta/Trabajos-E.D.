#ifndef AREATRAPECIO_H
#define AREATRAPECIO_H

#include <iostream>
#include <functional>
using namespace std;

template <typename T>
void Ingreso(T& b1, T& b2, T&h);

template <typename T>
T Cal_Area(T b1, T b2,T h, function<T(T, T,T)> area);

template <typename T>
void Im_Resultado(T area, function<void(T)> imprimir);

#endif 