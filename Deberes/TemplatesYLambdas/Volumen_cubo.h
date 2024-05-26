#ifndef VOLUMENCUBO_H
#define VOLUMENCUBO_H

#include <functional>
using namespace std;

template <typename T>
void Ingreso(T& l);

template <typename T>
T Volumen_cu(T l,function<T(T)> vol);

template <typename T>
void Im_Resultado(T volumen, function<void(T)> imprimir);

#endif 