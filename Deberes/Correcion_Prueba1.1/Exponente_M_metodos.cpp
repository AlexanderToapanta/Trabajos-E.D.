#include<iostream>
#include "I_Exponente_M.h"
using namespace std;

void GenerarMatriz(int**& matriz, int filas, int columnas) {
    matriz = new int*[filas];
    for (int i = 0; i < filas; ++i) {
        matriz[i] = new int[columnas];
    }
}

void LlenarMatriz(int** matriz, int c, int f) {
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << "Ingrese el elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void imprimirMatriz(int** matriz, int c, int f) {
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int** multiplicarMatrices(int** matrizA, int** matrizB, int c, int f, int e) {
    int** resultado;
    GenerarMatriz(resultado, f, c); 
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            resultado[i][j] = 0;
            for (int k = 0; k < c; ++k) { 
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
    return resultado;
}


void Exponencial_M(int** matriz, int c, int f, int e) {
    int** resultado = nullptr;
    for (int i = 1; i < e; ++i) {
        resultado = multiplicarMatrices(matriz, matriz, c, f, e);
        for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            matriz[i][j] = resultado[i][j];
        }
    }

    }

    


}