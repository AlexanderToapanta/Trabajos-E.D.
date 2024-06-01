#include <iostream>
#include <vector>
#include <stack>
#include "RecursionPilas.cpp"

using namespace std;

int main() {
    int* numeros = nullptr;
    size_t cantidad = 0;
    
    IngresarNumeros(numeros, cantidad);

    stack<int> stack;
    RecursionPilas<int> recursionPilas;

    for (size_t i = 0; i < cantidad; ++i) {
        stack.push(numeros[i]);
    }

    delete[] numeros; // Liberar la memoria dinámica

    cout << "Pila antes de clasificar: ";
    recursionPilas.imprimirPila(stack);

    recursionPilas.clasificarPila(stack);

    cout << "Pila despues de clasificar: ";
    recursionPilas.imprimirPila(stack);

    return 0;
}
