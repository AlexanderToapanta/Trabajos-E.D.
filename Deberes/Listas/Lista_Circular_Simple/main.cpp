#include "Lista_Circular_Simple.cpp"
#include <iostream>

int main() {
    Lista_Circular_Simple lista;

    lista.Insertar(25);
    lista.Insertar(30);
    lista.Insertar(20);

    std::cout << "Lista actual: ";
    lista.Mostrar();

    std::cout << "Buscar nodo (30): ";
    lista.Buscar(30);

    std::cout << "Eliminar nodo (30)" << std::endl;
    lista.Eliminar(30);

    std::cout << "Lista después de eliminar: ";
    lista.Mostrar();

    return 0;
}
