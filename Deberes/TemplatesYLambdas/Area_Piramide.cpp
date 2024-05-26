#include "Area_Piramide.h"
#include <iostream>
#include <cmath>
using namespace std;
template <typename T>
void Ingreso(T& b1, T& h) {
    cout << "Ingrese la longitud del lado de la base de la pirámide: ";
    cin >> b1;
    cout << "Ingrese la altura de la pirámide: ";
    cin >> h;
}

template <typename T>
 T Area_Piramide(T b1, T h, function<T(T,T)> area) {
    T baseArea = b1 * b1;
    T slantHeight = sqrt((b1 / 2) * (b1 / 2) + h * h);
    T lateralArea = 2 * b1 * slantHeight;
    return baseArea + lateralArea;
}

template <typename T>
void Im_Resultado(T area, function<void(T)> imprimir) {
    imprimir(area);
}
