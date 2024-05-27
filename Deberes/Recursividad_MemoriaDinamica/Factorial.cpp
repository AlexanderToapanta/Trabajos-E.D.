#include <iostream>
#include<vector>
#include"Factorial.h"
using namespace std;

template <typename T>
void Ingresar(T& t){
     cout << "Ingrese el numero que desee calcular el factorial: ";
    cin >> t;
}
template <typename T>
void Imprimir(T fac, function<void(T)> impri){
    impri(fac);
}
template <typename T>
T Proceso_Factorial(T t, function<T(T)> Calcu){
    auto factorial_impl = [&](auto self, T t) -> T {
        return (t <= 1) ? 1 : t * self(self, t - 1);
    };
    
    return factorial_impl(factorial_impl, t);
}