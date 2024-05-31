#include <iostream>
template <typename T>
void IngresarNumeros(T*& nums, size_t& cantidad);


auto DividirPorDos = [](auto num) {
    return num / 2;
};


template <typename T>
void DividirNumeros(T* nums, size_t cantidad);