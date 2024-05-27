#include "Mul_M.h"

using namespace std;

template <typename T, typename U>
void Ingresar(U** p, T t, T rows, const string& prompt, std::function<U()> in) {
    cout << prompt;
    for (T i = 0; i < t; ++i) {
        for (T j = 0; j < rows; ++j) {
            p[i][j] = in();
        }
    }
}


template <typename T, typename U>
void Imprimir(U** p, T t,T rows,function<void(const U&)> print)
 {
    cout << "\n";
    for (T i = 0; i < t; ++i) {
        for (T j = 0; j < rows; ++j) {
                print(p[i][j]);
                cout << "\t";
            }
            cout << "\n";
    }
    cout << "\n";
}

template <typename T, typename U>
void Proceso(U** pA, U** pB, U** pC, T rows, T cols, T current_row, T current_col, function<void(U**, U**, U**, T, T, T, T)> operacion) {
    if (current_row >= rows)
        return;

    if (current_col < cols) {
        pC[current_row][current_col] = 0;
        for (T k = 0; k < cols; ++k) {
            pC[current_row][current_col] += pA[current_row][k] * pB[k][current_col];
        }
        Proceso(pA, pB, pC, rows, cols, current_row, current_col + 1, operacion);
    } else {
        Proceso(pA, pB, pC, rows, cols, current_row + 1, 0, operacion);
    }
}


