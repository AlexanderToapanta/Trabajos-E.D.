#include<iostream>
#include "Order_Al_metodos.cpp"
using namespace std;

int main(){
    string* Palabras;
    int Cantidad;
    cout << "Ingrese el tamaño de la lista de palabras: ";
    cin>> Cantidad;
    Separar_Espacio(Palabras,Cantidad);
    Ingreso_Palabras(Palabras,Cantidad);
    Ordenar(Palabras,Cantidad);
}