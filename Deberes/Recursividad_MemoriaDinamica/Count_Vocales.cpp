#include "Count_Vocales.h"
#include<iostream>
#include <cctype>
using namespace std;

template <typename T>
void IngresarString(T& f) {
    cout << "Ingrese una palabra o frase: ";
    getline(cin, f);
}

template <typename T>
void ContarVocalesRecursivo(const T& f, size_t index, int& a, int& e, int& i, int& o, int& u, function<void()> imprimirResultado) {
    if (index == f.size()) {
        imprimirResultado();
        return;
    }

    auto contar = [&](char c) {
        switch (tolower(c)) {
            case 'a': a++; break;
            case 'e': e++; break;
            case 'i': i++; break;
            case 'o': o++; break;
            case 'u': u++; break;
            default: break;
        }
    };

    contar(f[index]);
    ContarVocalesRecursivo(f, index + 1, a, e, i, o, u, imprimirResultado);
}