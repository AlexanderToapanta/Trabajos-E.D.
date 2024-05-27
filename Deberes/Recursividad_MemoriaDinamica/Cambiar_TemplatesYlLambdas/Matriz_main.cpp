#include "Matriz.cpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

const size_t MAX = 3;

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    int mat1[MAX][MAX], mat2[MAX][MAX];

    auto generarAleatorio = []() -> int { return rand() % 10; };
    LlenarMatrices(mat1, mat2, std::function<int()>(generarAleatorio));

    auto imprimirEntero = [](const int& valor) { std::cout << valor; };
    ImprimirMatrices(mat1, mat2, std::function<void(const int&)>(imprimirEntero));

    auto sumarEnteros = [](int a, int b) -> int { return a + b; };
    SumaRecursiva(mat1, mat2, std::function<int(int, int)>(sumarEnteros));

    return 0;
}
