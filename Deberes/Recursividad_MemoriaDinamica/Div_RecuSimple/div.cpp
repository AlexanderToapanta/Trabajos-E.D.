#include "div.h"
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
void DividirNumeros(T* nums, size_t cantidad) {
    if (cantidad == 0)
        return;
    else {
        nums[0] = DividirPorDos(nums[0]);
        DividirNumeros(nums + 1, cantidad - 1); // Llamada recursiva
    }
}