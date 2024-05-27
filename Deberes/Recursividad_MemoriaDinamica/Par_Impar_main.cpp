#include <iostream>
#include <functional>
#include "Par_Impar.cpp"
using namespace std;

int main() {
    int* numeros;
    size_t cantidad;
    IngresarNumeros(numeros, cantidad);
    cout << "Resultados:\n";
    VerificarParImpar(numeros,cantidad, function<void(const int&)>([](const int& num) {
        cout << num;
    }));

    return 0;
}
