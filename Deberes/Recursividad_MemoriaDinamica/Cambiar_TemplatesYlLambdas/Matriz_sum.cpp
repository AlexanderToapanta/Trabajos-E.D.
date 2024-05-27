#include"Matriz_sum.h"
using namespace std;
template <typename T>
void  LlenarMatriz(T** mat1,T** mat2,size_t N,function<T()>generar) {
    for (size_t i = 0; i < N; ++i) {
        for (size_t j = 0; j < N; ++j) {
            mat1[i][j] =generar();
             mat2[i][j] = generar();
        }
    }
}

template <typename T>
void ImprimirM(T** mat1,T** mat2,size_t N,function<void(const T&)> imprimir) {
    auto imprimir_matrix = [&](T** matrix, const std::string& name) {
        cout << name << ":\n";
        for (size_t i = 0; i < N; ++i) {
            for (size_t j = 0; j < N; ++j) {
                imprimir(matrix[i][j]);
                cout << "\t";
            }
            cout << "\n";
        }
        cout << "\n";
    };
   imprimir_matrix(mat1, "Matriz 1");
    imprimir_matrix(mat2, "Matriz 2");
}

template <typename T >
void SumaRecursivaM(T** mat1,T** mat2,T** matR,size_t N,function<T(T,T)>suma) {
    auto sumaRecursiva = [&](auto& self, int f, int c) -> void {
        if (f >= 0 && c >= 0) {
            matR[f][c] = suma(mat1[f][c], mat2[f][c]);
            if (c > 0) self(self, f, c - 1);
            if (c == 0 && f > 0) self(self, f - 1, N - 1);
        }
    };
    sumaRecursiva(sumaRecursiva, N - 1, N - 1);
}

template <typename T>
void ImprimirSum(T** matR,size_t N,function<void(const T&)>imprimir) {
   cout << "\nLa matriz resultado es:\n";
    for (size_t i = 0; i < N; ++i) {
        for (size_t j = 0; j < N; ++j) {
            imprimir(matR[i][j]);
        cout << "\t";
        }
        cout << "\n";
    }
}