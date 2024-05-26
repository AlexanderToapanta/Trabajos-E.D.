#include <iostream>
#include"Cal_Densidad.h"
using namespace std;

template <typename T>
void Ingreso(T& m, T& v) {
    cout << "Ingrese la masa: ";
    cin >> m;
    cout << "Ingrese el volumen: ";
    cin >> v;
    while(v<=0){
    cout << "Ingrese un volumen mayor a 0: ";
    cin >> v;
    }
    
}

template <typename T>
 T Cal_densidad(T m, T v,function<T(T,T)> d) {

    return d(m,v);
}

template <typename T>
void Im_Resultado(T d, function<void(T)> imprimir) {
    imprimir(d);
}