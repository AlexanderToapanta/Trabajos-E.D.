#ifndef ParImpar_H
#define ParImpar_H

#include <iostream>
#include <functional>
using namespace std;

template <typename T>
void IngresarNumeros(T*& nums, size_t& cantidad);

template <typename T>
void VerificarParImpar(T* nums, size_t cantidad,function<void(const T&)> imprimirResultado);

#endif 
