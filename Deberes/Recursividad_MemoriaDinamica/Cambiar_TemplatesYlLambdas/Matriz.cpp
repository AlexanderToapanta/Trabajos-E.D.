#include "Matriz.h"

template <typename T, size_t N>
void LlenarMatrices(T (&mat1)[N][N], T (&mat2)[N][N], std::function<T()> generar) {
    for (size_t i = 0; i < N; ++i) {
        for (size_t j = 0; j < N; ++j) {
            mat1[i][j] = mat2[i][j] = generar();
        }
    }
}

template <typename T, size_t N>
void ImprimirMatrices(T (&mat1)[N][N], T (&mat2)[N][N], std::function<void(const T&)> imprimir) {
    auto imprimirMatriz = [&](T (&matrix)[N][N], const std::string& nombre) {
        std::cout << nombre << ":\n";
        for (size_t i = 0; i < N; ++i) {
            for (size_t j = 0; j < N; ++j) {
                imprimir(matrix[i][j]);
                std::cout << "\t";
            }
            std::cout << "\n";
        }
        std::cout << "\n";
    };

    imprimirMatriz(mat1, "Matriz 1");
    imprimirMatriz(mat2, "Matriz 2");
}

template <typename T, size_t N>
void sumaRecursivaMatrices(T (&mat1)[N][N], T (&mat2)[N][N], std::function<T(T, T)> sumar, int f, int c, T& resultado) {
    if (f == 0 && c == 0) {
        resultado = sumar(mat1[f][c], mat2[f][c]);
    } else {
        if (f > -1) {
            c--;
            if (c >= -1) {
                resultado = sumar(mat1[f][c + 1], mat2[f][c + 1]);
                sumaRecursivaMatrices(mat1, mat2, sumar, f, c, resultado);
                resultado += sumar(mat1[f][c], mat2[f][c]);
            } else {
                sumaRecursivaMatrices(mat1, mat2, sumar, f - 1, N - 1, resultado);
            }
        }
    }
}

template <typename T>
void imprimirSumaMatrices(T** matR, size_t N, std::function<void(const T&)> print) {
    std::cout << "\nLa matriz resultado es:\n";
    for (size_t i = 0; i < N; ++i) {
        for (size_t j = 0; j < N; ++j) {
            print(matR[i][j]);
            std::cout << "\t";
        }
        std::cout << "\n";
    }
}
