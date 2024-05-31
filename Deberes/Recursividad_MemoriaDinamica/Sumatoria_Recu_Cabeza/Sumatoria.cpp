#include "Sumatoria.h"
#include <iostream>
#include <functional>
template <typename T>
void IngresarNumeros(T*& nums, size_t& cantidad) {
    std::cout << "Ingrese los numeros (ingrese 0 para finalizar):\n";
    T num;
    size_t capacidad = 10;
    cantidad = 0;
    nums = new T[capacidad]; 

    while (std::cin >> num && num != 0) {
        nums[cantidad++] = num;
        if (cantidad == capacidad) {
            capacidad *= 2;
            T* temp = new T[capacidad];
            for (size_t i = 0; i < cantidad; ++i) {
                temp[i] = nums[i];
            }
            delete[] nums;
            nums = temp;
        }
    }
}

template<typename T>
T sumatoria(T* numeros, int size, int indice) {
    if (indice == size) {
        return 0;
    } else {
        int multiplicador = indice + 1;\
        return sumatoria(numeros, size, indice + 1) + (numeros[indice] * multiplicador);
    }
}