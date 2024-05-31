#include <iostream>
#include "Sumatoria.cpp"

int main() {
    int* numeros = nullptr;
    size_t cantidad ;

    IngresarNumeros(numeros, cantidad);

    int resultado = sumatoria(numeros, cantidad, 0);
    std::cout << "La sumatoria de los números, multiplicados por su posición, es: " << resultado << std::endl;

    delete[] numeros; // Liberamos la memoria dinámica
    return 0;
}
