#include <iostream>
#include <functional>
#include "Mul_M.cpp"

using namespace std;

int main() {
    const int rows = 3, cols = 3;
    const int n = rows * cols;

    int** A = new int*[rows];
    int** B = new int*[rows];
    int** C = new int*[rows];

    auto readInput = []() -> int {
        int value;
        cout << "Ingrese un valor: ";
        cin >> value;
        return value;
    };

    auto print = [](const int& x) { cout << x; };

    for (int i = 0; i < rows; ++i) {
        A[i] = new int[cols];
        B[i] = new int[cols];
        C[i] = new int[cols];
    }

    Ingresar(A, rows, cols, "Ingrese los valores de la matriz A: ", function<int()>(readInput));
    Ingresar(B, rows, cols, "Ingrese los valores de la matriz B: ", function<int()>(readInput));

    cout << "Matriz A: ";
    Imprimir(A, rows, cols, function<void(const int&)>(print));
    cout << endl << "Matriz B: ";
    Imprimir(B, rows, cols, function<void(const int&)>(print));
    cout << endl;

    Proceso(A, B, C, rows, cols, 0, 0, function<void(int**, int**, int**, int, int, int, int)>([](int** A, int** B, int** C, int rows, int cols, int current_row, int current_col) {
        return;
    }));

    cout << "Matriz C (resultado de A * B): ";
    Imprimir(C, rows, cols, function<void(const int&)>(print));
    cout << endl;


    return 0;
}


