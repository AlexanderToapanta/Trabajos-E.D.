#include<string>
#include<iostream>
#include <algorithm>
#include"I_Orde_Al.h"
using namespace std;

void Separar_Espacio(string*& Palabras, int Cantidad){
Palabras = new string[Cantidad];
}
void Ingreso_Palabras(string* Palabras, int Cantidad){

    for(int i=0;i<Cantidad;++i){
        cin>>Palabras[i];
    }
}
void Ordenar(string* Palabras, int Cantidad){
    sort(Palabras,Palabras + Cantidad);
    cout << "Las palabras en orden alfabético son:" << endl;
    for (int i = 0; i < Cantidad; ++i) {
        cout << Palabras[i] << " ";
    }
}