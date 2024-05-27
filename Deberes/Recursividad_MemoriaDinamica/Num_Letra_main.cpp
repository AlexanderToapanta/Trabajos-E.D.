#include"Num_Letra.cpp"
#include <iostream>
#include <string>
    using namespace std;

int main() {
    string frase;
    IngresarString(frase);

    string numeros, letras;

    auto imprimirResultado = [&]() {
        cout << "La palabra/frase tiene:\n";
        cout << "Números: " << numeros << "\n";
        cout << "Letras: " << letras << "\n";
    };

    SepararNumerosLetrasRecursivo(frase, 0, numeros, letras, imprimirResultado);

    return 0;
}