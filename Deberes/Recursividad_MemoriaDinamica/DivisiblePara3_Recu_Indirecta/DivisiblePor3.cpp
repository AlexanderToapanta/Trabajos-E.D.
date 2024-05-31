#include "DivisiblePor3.h"
#include <iostream>

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

template <typename T>
void VerificarDivisibilidadPor3(T* nums, size_t cantidad, std::function<void(const T&)> imprimirResultado) {
    VerificarDivisibilidadPor3Aux(nums, cantidad, imprimirResultado);
    delete[] nums; 
}

template <typename T>
void VerificarDivisibilidadPor3Aux(T* nums, size_t cantidad, std::function<void(const T&)> imprimirResultado) {
    if (cantidad == 0) return;
    
    if (nums[0] % 3 == 0) {
        imprimirResultado(nums[0]);
        std::cout << " es divisible por 3.\n";
    } else {
        imprimirResultado(nums[0]);
        std::cout << " no es divisible por 3.\n";
    }

    VerificarDivisibilidadPor3Aux(nums + 1, cantidad - 1, imprimirResultado);
}
