#include "Vocal_Con.h"
#include <cctype>

template <typename T>
void IngresarString(T& f) {
    cout << "Ingrese una palabra o frase: ";
    getline(cin, f);
}

template <typename T>
void SepararVocalesConsonantesRecursivo(const T& f, size_t index, string& vocales, string& consonantes, function<void()> imprimirResultado) {


    auto clasificar = [&](char c) {
        if (isalpha(c)) {
            switch (tolower(c)) {
                case 'a': case 'e': case 'i': case 'o': case 'u':
                    vocales += c;
                    break;
                default:
                    consonantes += c;
                    break;
            }
        }
    };

    clasificar(f[index]);
    SepararVocalesConsonantesRecursivo(f, index + 1, vocales, consonantes, imprimirResultado);
}
