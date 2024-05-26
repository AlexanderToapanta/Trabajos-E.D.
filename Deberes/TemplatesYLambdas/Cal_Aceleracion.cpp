#include<iostream>
#include"Cal_Aceleracion.h"
using namespace std;

template <typename T>
void Ingreso(T& V, T& t,T& V_i) {
    cout << "Ingrese la velocidad incial: ";
    cin >> V_i;
    cout << "Ingrese el tiempo transcurrido: ";
    cin >> t;
    while(t<=0){
    cout << "Ingrese un tiempo mayor a 0: ";
    cin >> t;
    }
    cout << "Ingrese la velocidad final: ";
    cin >> V;
}

template <typename T>
 T Cal_aceleracion(T V, T t,T V_i,function<T(T,T,T)> a) {

    return a(V,t,V_i);
}

template <typename T>
void Im_Resultado(T a, function<void(T)> imprimir) {
    imprimir(a);
}