#include <iostream>
#include <functional>
#include "DivisiblePor3.cpp"

int main() {
    int* numeros;
    size_t cantidad;
    IngresarNumeros(numeros, cantidad);
    std::cout << "Resultados:\n";
    VerificarDivisibilidadPor3(numeros, cantidad, std::function<void(const int&)>([](const int& num) {
    std::cout << num;
}));

    return 0;
}
