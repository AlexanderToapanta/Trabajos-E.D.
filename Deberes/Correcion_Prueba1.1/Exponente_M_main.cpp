#include<iostream>
#include"Exponente_M_metodos.cpp"
using namespace std;

int main(){
    int ** matriz;
    int filas, columnas, exponente;
    cout << "Ingrese el número de filas: ";
    cin >> filas;
    cout << "Ingrese el número de columnas: ";
    cin >> columnas;

    GenerarMatriz(matriz, filas, columnas);

    LlenarMatriz(matriz, filas, columnas);

    cout << "Ingrese el exponente: ";
    cin >> exponente;

    Exponencial_M(matriz, filas, columnas, exponente);

    cout << "Matriz resultante: " << endl;
    imprimirMatriz(matriz, filas, columnas);

    return 0;
}