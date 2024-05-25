#include "Hola.cpp"
#include <iostream>
#include <functional>
#include <cstdlib>
using namespace std;

typedef int entero;
typedef int size_type;

int main(){
    size_type a;
    cout<<"Ingrese el tamanio";
    cin>>a;
    entero* ptr = new entero[a];

    auto ingreso_valores = []() -> entero {
        entero valor;
        cin >> valor;
        return valor;
    };

Ingresar<size_type, entero>(ptr, a, ingreso_valores);
auto imprimir_valor = [](const entero& val) {
        cout << val;
    };
Imprimir<size_type, entero>(ptr, a, imprimir_valor);

    cout << "\nIngrese el escalar: ";
    entero escalar;
    cin >> escalar;

    auto escalar_operacion = [escalar](entero val) -> entero {
        return val * escalar;
    };
    Proceso<size_type, entero>(ptr, a, escalar_operacion);

Imprimir<size_type, entero>(ptr, a, imprimir_valor);



    return 0;
}