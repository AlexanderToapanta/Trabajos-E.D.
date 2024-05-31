#include "Impar_Par.h"

template <typename T>
void IngresarNumeros(T*& nums, size_t& cantidad, const std::function<T()>& readInput) {
    std::cout << "Ingrese los numeros (ingrese 0 para finalizar):\n";
    T num;
    size_t capacidad = 10;
    cantidad = 0;
    nums = new T[capacidad];

    while (true) {
        num = readInput();
        if (num == 0) {
            break;
        }
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
    nums[cantidad] = 0; // Agregar el valor cero al final del arreglo
}

template <typename T>
void VerificarParImparRecursivo(T* nums, size_t index, size_t cantidad, const std::function<void(T*)>& procesar) {
    int sumaImpares = 0;
    int restaPares = 0;

    auto sumaImparesFunc = [&sumaImpares, &nums](size_t index) -> void {
        sumaImpares += nums[index];
    };

    if (index < cantidad) {
        if (nums[index] % 2 == 0) {
            restaPares -= nums[index]; // Resta los números pares
        } else {
            sumaImparesFunc(index); // Suma los números impares
        }
        VerificarParImparRecursivo(nums, index + 1, cantidad, procesar);
    } else {

        procesar(nums);
    }
}

