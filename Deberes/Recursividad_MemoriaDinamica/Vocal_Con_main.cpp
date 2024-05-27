#include <iostream>
#include <string>
#include"Vocal_Con.cpp"
using namespace std;

int main() {
    string frase;
    IngresarString(frase);

    string vocales, consonantes;

    auto imprimirResultado = [&]() {
        cout << "La palabra/frase tiene:\n";
        cout << "Vocales: " << vocales << "\n";
        cout << "Consonantes: " << consonantes << "\n";
    };

    SepararVocalesConsonantesRecursivo(frase, 0, vocales, consonantes, imprimirResultado);

    return 0;
}