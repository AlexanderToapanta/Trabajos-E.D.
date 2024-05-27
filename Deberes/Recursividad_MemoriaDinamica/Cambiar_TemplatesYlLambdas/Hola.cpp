#include "Hola.h"
using namespace std;

template <typename T, typename U>
void Ingresar(U* p, T t, function<U()> gen) {
    for (T i = 0; i < t; ++i) {
        p[i] = gen();
    }
}

template <typename T, typename U>
void Imprimir(U* p, T t, function<void(const U&)> print) {
    std::cout << "{ ";
    for (T i = 0; i < t; ++i) {
        print(p[i]);
        std::cout << " ";
    }
    std::cout << "}\n";
}

template <typename T, typename U>
void Proceso(U* p, T t, function<U(U)> operacion) {
    for (T i = 0; i < t; ++i) {
        p[i] = operacion(p[i]);
    }
}