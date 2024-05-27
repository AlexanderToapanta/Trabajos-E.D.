#include"MCD.h"
#include<iostream>
using namespace std;
template <typename T>
void IngresarNumeros(T& n1,T& n2) {
    cout << "Ingrese el primer numero: ";
    cin >> n1;
    cout << "Ingrese el segundo numero: ";
    cin >> n2;
}
template <typename T>
T cal_MCD(T a, T b, std::function<T(T, T)> mcd) {
    auto mcd_r = [&](T a, T b, auto& self) -> T {
        return (b == 0) ? a : self(b, a % b, self);
    };
    return mcd_r(a, b, mcd_r);
}