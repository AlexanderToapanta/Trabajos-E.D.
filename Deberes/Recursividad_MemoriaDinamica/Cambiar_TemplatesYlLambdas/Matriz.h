#ifndef MATRIZ_H
#define MATRIZ_H

#include <iostream>
#include <functional>

template <typename T, size_t N>
void LlenarMatrices(T (&mat1)[N][N], T (&mat2)[N][N], std::function<T()> generar);

template <typename T, size_t N>
void ImprimirMatrices(T (&mat1)[N][N], T (&mat2)[N][N], std::function<void(const T&)> imprimir);

template <typename T, size_t N>
void SumaRecursiva(T (&mat1)[N][N], T (&mat2)[N][N], std::function<T(T, T)> sumar);

#endif 

