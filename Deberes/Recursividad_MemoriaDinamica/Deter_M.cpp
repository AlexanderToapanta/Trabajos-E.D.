#include "Deter_M.h"

template <typename T, typename U>
void Ingresar(U** p, T t, T rows, const std::string& prompt, std::function<U()> in) {
    std::cout << prompt;
    for (T i = 0; i < t; ++i) {
        for (T j = 0; j < rows; ++j) {
            p[i][j] = in();
        }
    }
}

template <typename T, typename U>
void Imprimir(U** p, T t, T rows, std::function<void(const U&)> print) {
    std::cout << "\n";
    for (T i = 0; i < t; ++i) {
        for (T j = 0; j < rows; ++j) {
            print(p[i][j]);
            std::cout << "\t";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}

template <typename T, typename U>
U Determinante(U** p, T size) {
    U det = 0;
    if (size == 1) {
        det = p[0][0];
    } else {
        for (T k = 0; k < size; ++k) {
            U** submatrix = new U*[size - 1];
            for (T i = 0; i < size - 1; ++i) {
                submatrix[i] = new U[size - 1];
            }
            for (T i = 1; i < size; ++i) {
                T l = 0;
                for (T j = 0; j < size; ++j) {
                    if (j != k) {
                        submatrix[i - 1][l++] = p[i][j];
                    }
                }
            }
            U sub_det = Determinante(submatrix, size - 1);
            det += (k % 2 == 0 ? 1 : -1) * p[0][k] * sub_det;
            for (T i = 0; i < size - 1; ++i) {
                delete[] submatrix[i];
            }
            delete[] submatrix;
        }
    }
    return det;
}

