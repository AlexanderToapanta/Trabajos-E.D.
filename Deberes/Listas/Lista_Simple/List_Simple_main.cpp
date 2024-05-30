#include "List_Simple.cpp"
#include <iostream>
#include <string>

using namespace std;

int main() {
    nodo* inicial = nullptr;
    List_Simple lista(0, "", inicial);

    lista.Insertar(25, "Alice");
    lista.Insertar(30, "Bob");
    lista.Insertar(20, "Charlie");

    cout << "Lista actual: ";
    lista.Mostrar();

    cout << "Buscar nodo (Edad=30, Nombre=Bob): ";
    lista.Buscar(30, "Bob");

    cout << "Eliminar nodo (Edad=30, Nombre=Bob)" << endl;
    lista.Eliminar(30, "Bob");

    cout << "Lista después de eliminar: ";
    lista.Mostrar();

    return 0;
}
