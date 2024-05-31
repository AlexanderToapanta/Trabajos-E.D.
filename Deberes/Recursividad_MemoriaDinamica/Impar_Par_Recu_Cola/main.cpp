#include "Impar_Par.cpp"
#include <functional>

int main() {
    std::function<int()> readInput = []() -> int {
        int value;
        std::cout << "Ingrese un valor: ";
        std::cin >> value;
        return value;
    };

    std::function<void(const int&)> print = [](const int& x) { std::cout << x; };

    size_t cantidad;
    int* nums;
    IngresarNumeros(nums, cantidad, std::function<int()>(readInput));

    auto procesar = [print](int* nums) {
        int sumaImpares = 0;
        int restaPares = 0;

        for (size_t i = 0; nums[i] != 0; ++i) {
            if (nums[i] % 2 != 0) {
                sumaImpares += nums[i];
            } else {
                restaPares -= nums[i];
            }
        }

        std::cout << "La suma de los numeros impares es: " << sumaImpares << std::endl;
        std::cout << "La resta de los numeros pares es: " << restaPares << std::endl;

        delete[] nums;
    };

    std::function<void(int*)> procesarFunc = procesar;

    VerificarParImparRecursivo(nums, 0, cantidad, procesarFunc);

    return 0;
}


