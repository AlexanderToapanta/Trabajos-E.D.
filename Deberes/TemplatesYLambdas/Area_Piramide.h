#ifndef AREAPIRAMIDE_H
#define AREAPIRAMIDE_H

#include <iostream>
#include <functional>
using namespace std;

template <typename T>
void Ingreso(T& b1, T&h);

template <typename T>
T Area_Piramide(T b1, T h, function<T(T,T)> area);

template <typename T>
void Im_Resultado(T area, function<void(T)> imprimir);

#endif