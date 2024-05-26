#include"Volumen_cubo.h"
#include<iostream>
using namespace std;

template <typename T>
T Volumen_cu(T l, function<T(T)> vol) {
    return vol(l);
}

template <typename T>
void Ingreso(T& l) {
    cout << "Ingrese uno de los lados del cubo: ";
    cin >> l;
}

template <typename T>
void Im_Resultado(T volumen,function<void(T)> imprimir) {
    imprimir(volumen);
}
