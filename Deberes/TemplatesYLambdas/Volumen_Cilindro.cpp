#include"Volumen_Cilindro.h"
#include <cmath>
#include <iostream>

using namespace std;
template <typename T>
T Cal_Volumen(T r, T h, function<T(T, T)> vol) {
    return vol(r, h);
}

template <typename T>
void Ingreso(T& r, T& h) {
    cout << "Ingrese el radio del cilindro: ";
    cin >> r;
    cout << "Ingrese la altura del cilindro: ";
    cin >> h;
}

template <typename T>
void Im_Resultado(T volumen,function<void(T)> imprimir) {
    imprimir(volumen);
}

