#include<iostream>
#include"Cal_Velocidad.h"
using namespace std;

template <typename T>
void Ingreso(T& x, T& t) {
    cout << "Ingrese la distancia recorrida: ";
    cin >> x;
    cout << "Ingrese el tiempo transcurrido: ";
    cin >> t;
    while(t<=0){
    cout << "Ingrese un tiempo mayor a 0: ";
    cin >> t;
    }
}

template <typename T>
 T Cal_velocidad(T x, T t, function<T(T,T)> v) {

    return v(x,t);
}

template <typename T>
void Im_Resultado(T v, function<void(T)> imprimir) {
    imprimir(v);
}