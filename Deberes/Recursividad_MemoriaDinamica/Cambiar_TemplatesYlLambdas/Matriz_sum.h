#ifndef MATRIZ_H
#define MATRIZ_H
#include <iostream>
#include <functional>
using namespace std;
template<typename T>
void LlenarMatriz(T** mat1,T** mat2,size_t N,function<T()>generar);
template<typename T>
void ImprimirM(T** mat1,T** mat2,size_t N,function<void(const T&)> imprimir);
template<typename T>
void SumaRecursivaM(T** mat1,T** mat2,T** matR,size_t N,function<T(T,T)>suma);
template<typename T>
void ImprimirSum(T** matR,size_t N,function<void(const T&)>imprimir);


#endif 