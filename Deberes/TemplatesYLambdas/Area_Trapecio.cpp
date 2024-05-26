#include"Area_Trapecio.h"
#include <iostream>
#include <functional>
using namespace std;

using namespace std;

template <typename T>
T Cal_Area(T b1, T b2,T h, function<T(T, T,T)> area) {
    return area(b1,b2, h);
}

template <typename T>
void Ingreso(T& b1, T& b2, T&h) {
    cout << "Ingrese la primera base: ";
    cin >> b1;
    cout << "Ingrese la segunda base: ";
    cin >> b2;
    cout << "Ingrese la altura: ";
    cin >> h;
}

template <typename T>
void Im_Resultado(T area, function<void(T)> imprimir) {
    imprimir(area);
}