#include <iostream>
#include <functional>
#include <vector>
#include "Deter_M.cpp"

int main() {
    const int size = 3;
 int** A = new int*[size];
for (int i = 0; i < size; ++i) {
        A[i] = new int[size];
    }
    auto readInput = []() -> int {
        int value;
        std::cout << "Ingrese un valor: ";
        std::cin >> value;
        return value;
    };

    auto print = [](const int& x) { std::cout << x; };

    Ingresar(A, size, size, "Ingrese los valores de la matriz A: ", std::function<int()>(readInput));

    std::cout << "Matriz A: ";
    Imprimir(A, size, size, std::function<void(const int&)>(print));
    std::cout << std::endl;

    int det = Determinante(A, size);

    std::cout << "Determinante de la matriz A: " << det << std::endl;

    return 0;
}

