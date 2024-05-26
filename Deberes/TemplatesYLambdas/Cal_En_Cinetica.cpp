#include <iostream>
#include"Cal_En_Cinetica.h"
using namespace std;

template <typename T>
void Ingreso(T& m, T& v) {
    cout << "Ingrese la masa: ";
    cin >> m;
    cout << "Ingrese la velocidad: ";
    cin >> v;
    
}

template <typename T>
 T Cal_En_cinetica(T m, T v,function<T(T,T)> Ek) {
    return Ek(m,v);
}

template <typename T>
void Im_Resultado(T Ek, function<void(T)> imprimir) {
    imprimir(Ek);
}