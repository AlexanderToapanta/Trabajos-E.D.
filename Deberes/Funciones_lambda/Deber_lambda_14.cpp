/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Descipcion del problema: Funcion que divide los elementos en posiciones pares del arreglo y multiplica lo que se encunetren 
 * en posiciones impares. Los numeros son los multiplos del 3 hasta el 30
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

pair<float,float> Operacion(array<T,10>& ar) {
    float division = 1, multiplicacion = 1;
    for (int i = 0; i < ar.size(); i++) {
        if (i % 2 == 0) {
            division = ar[i]/division;
        } else {
            multiplicacion *= ar[i];
        }
    }
    return make_pair(division, multiplicacion);
}
void imprimir (float a, float b){
    cout<<"El resultado de la multiplicacion fue: "<< b <<endl;
    cout<<"El resultado de la division fue: "<< a <<endl;
}

int main(){
array<float, 10> numeros ={3,6,9,12,15,18,21,24,27,30};
auto resultado = Operacion(numeros);
imprimir(resultado.first,resultado.second);

getch();
}