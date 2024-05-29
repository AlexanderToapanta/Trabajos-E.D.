#include<iostream>
#include "I_Exponente_M.h"
using namespace std;

void GenerarMatriz(int**& matriz, int filas, int columnas)
{
    matriz = new int*[filas];
    for (int i = 0; i < filas; ++i) {
        matriz[i] = new int[columnas];
    }
}
void LlenarMatriz(int** matriz, int c, int f){
for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << "Ingrese el elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}
 void imprimirMatriz(int** matriz, int c, int f){
     for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
        cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int potencia (int dato, int exponente){
    int resultado = 1;
    for (int i = 0; i < exponente; ++i) {
        resultado *= dato;
    }
    return resultado;
}

void Exponencial_M(int** matriz, int c, int f,int e){
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            matriz[i][j] = potencia(matriz[i][j], e);
        }
    }
}