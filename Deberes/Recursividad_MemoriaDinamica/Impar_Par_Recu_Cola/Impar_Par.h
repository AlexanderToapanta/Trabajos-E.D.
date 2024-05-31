#ifndef IMPAR_PAR_H
#define IMPAR_PAR_H

#include <functional>
#include <iostream>

template <typename T>
void IngresarNumeros(T*& nums, size_t& cantidad, const std::function<T()>& readInput);

template <typename T>
void VerificarParImparRecursivo(T* nums, size_t index, size_t cantidad, const std::function<void(T*)>& procesar);

#endif
