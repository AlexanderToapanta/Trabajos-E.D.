#include<iostream>
#include"I_List_Num.h"
using namespace std;
void Ingreso(int*& Numeros, int& Cantidad){
    cout<<"Ingrese los numeros (ingrese 0 para finalizar el ingreso)"<<endl;
    int num, capacidad=10;
    Cantidad=0;
    Numeros = new int[capacidad];
    while (cin >> num && num != 0) {
        Numeros[Cantidad++] = num;
        if (Cantidad == capacidad) {
            capacidad *= 2;
            int* temp = new int [capacidad];
            for (size_t i = 0; i < Cantidad; ++i) {
                temp[i] =Numeros[i];
            }
            delete[] Numeros;
            Numeros = temp;
        }
    }
}

void Invertir(int* Numeros, int Cantidad){
    cout << "Números ordenados inversamente:" << endl;
    for(int i = Cantidad - 1; i >= 0; i--){
        cout << Numeros[i] << " ";
    }
    cout << endl;
}
