#ifndef Factorial_H
#define Factorial_H

#include <iostream>
#include <functional>
using namespace std;

template <typename T>
void Ingresar(T& t);

template <typename T>
void Imprimir(T fac, function<void(T)> impri);

template <typename T>
T Proceso_Factorial(T t, function<T(T)>Calcu);




#endif