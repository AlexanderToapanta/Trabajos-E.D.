#ifndef VOLUMENCILINDRO_H
#define VOLUMENCILINDRO_H

#include <functional>
using namespace std;

template <typename T>
void Ingreso(T& r, T& h);

template <typename T>
T Cal_Volumen(T r, T h, function<T(T, T)> vol);

template <typename T>
void Im_Resultado(T volumen, function<void(T)> imprimir);

#endif 

