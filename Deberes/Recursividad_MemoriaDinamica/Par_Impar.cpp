#include "Par_Impar.h"
#include<iostream>
using namespace std;

template <typename T>
void IngresarNumeros(T*& nums, size_t& cantidad) {
    cout << "Ingrese los numeros (ingrese 0 para finalizar):\n";
    T num;
    size_t capacidad = 10;
    cantidad = 0;
    nums = new T[capacidad]; 

    while (cin >> num && num != 0) {
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
void VerificarParImpar(T* nums, size_t cantidad, function<void(const T&)> imprimirResultado) {
    for (size_t i = 0; i < cantidad; ++i) {
        if (nums[i] % 2 == 0) {
            imprimirResultado(nums[i]);
            cout << " es par.\n";
        } else {
            imprimirResultado(nums[i]);
            cout << " es impar.\n";
        }
    }
    delete[] nums; 
}
