#include <iostream>
#include <string>
#include "Count_Vocales.cpp"
using namespace std;
int main() {
    string frase;
    IngresarString(frase);

    int a = 0, e = 0, i = 0, o = 0, u = 0;

    auto imprimirResultado = [&]() {
        cout << "La palabra/frase tiene:\n";
        cout << " - " << a << " 'a'\n";
        cout << " - " << e << " 'e'\n";
        cout << " - " << i << " 'i'\n";
        cout << " - " << o << " 'o'\n";
        cout << " - " << u << " 'u'\n";
    };

    ContarVocalesRecursivo(frase, 0, a, e, i, o, u, imprimirResultado);

    return 0;
}
