#include <cctype>
#include "Num_Letra.h"
template <typename T>
void IngresarString(T& f) {
    cout << "Ingrese una palabra o frase: ";
    getline(cin, f);
}

template <typename T>
void SepararNumerosLetrasRecursivo(const T& f, size_t index, string& numeros, string& letras, function<void()> imprimirResultado) {

    auto clasificar = [&](char c) {
        if (isdigit(c)) {
            numeros += c;
        } else if (isalpha(c)) {
            letras += c;
        }
    };

    clasificar(f[index]);
    SepararNumerosLetrasRecursivo(f, index + 1, numeros, letras, imprimirResultado);
}