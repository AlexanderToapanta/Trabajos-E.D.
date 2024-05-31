#ifndef DIVISIBLEPOR3_H
#define DIVISIBLEPOR3_H

#include <functional>

template <typename T>
void IngresarNumeros(T*& nums, size_t& cantidad);

template <typename T>
void VerificarDivisibilidadPor3(T* nums, size_t cantidad, std::function<void(const T&)> imprimirResultado);

template <typename T>
void VerificarDivisibilidadPor3Aux(T* nums, size_t cantidad, std::function<void(const T&)> imprimirResultado);

#endif 
