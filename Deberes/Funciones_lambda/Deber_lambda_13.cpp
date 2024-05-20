/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Descipcion del problema: Funcion que suma los elementos en posiciones pares del arreglo y resta lo que se encunetren 
 * en posiciones impares. Los numeros dentro del array van del 1 al 10
 * Autor:  Alexander Toapanta
 * Fecha de creacion: 16/05/2024
 * Fecha de modificacion: 
 ***********************************************************************/
#include <iostream>
#include <conio.h>
#include <algorithm>
#include <functional>
#include <array>
using namespace std;

template<typename T>
pair<int, int> Operacion(array<T,10>& ar) {
    int suma = 0, resta = 0;
    for (int i = 0; i < ar.size(); i++) {
        if (i % 2 == 0) {
            suma += ar[i];
        } else {
            resta -= ar[i];
        }
    }
    return make_pair(suma, resta);
}
void imprimir (int a, int b){
    cout<<"El resultado de la suma fue: "<< a <<endl;
    cout<<"El resultado de la resta fue: "<< b <<endl;
}

int main(){
array<int, 10> numeros ={1,2,3,4,5,6,7,8,9,10};
auto resultado = Operacion(numeros);
imprimir(resultado.first,resultado.second);

getch();
}