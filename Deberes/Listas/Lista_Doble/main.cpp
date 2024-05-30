#include "Lista_Doble.cpp"
#include <iostream>
#include <string>

using namespace std;

int menu() {
    int opcion;
    cout << "\n--- Menú ---" << endl;
    cout << "1. Insertar nodo" << endl;
    cout << "2. Buscar nodo" << endl;
    cout << "3. Eliminar nodo" << endl;
    cout << "4. Mostrar lista" << endl;
    cout << "5. Mostrar lista en orden inverso" << endl;
    cout << "6. Salir" << endl;
    cout << "Ingrese su opción: ";

    while (!(cin >> opcion)) {
        cout << "Opción inválida. Por favor, ingrese un número: ";
        cin.clear();
    }

    return opcion;
}

int main() {
    Lista_Doble lista;

    int opcion;
    do {
        opcion = menu();

        switch (opcion) {
            case 1: {
                int edad;
                string nombre;
                cout << "Ingrese la edad del nuevo nodo: ";
                cin >> edad;
                cout << "Ingrese el nombre del nuevo nodo: ";
                cin.ignore();
                getline(cin, nombre);
                lista.Insertar(edad, nombre);
                break;
            }
            case 2: {
                int edad;
                string nombre;
                cout << "Ingrese la edad del nodo a buscar: ";
                cin >> edad;
                cout << "Ingrese el nombre del nodo a buscar: ";
                cin.ignore();
                getline(cin, nombre);
                lista.Buscar(edad, nombre);
                break;
            }
            case 3: {
                int edad;
                string nombre;
                cout << "Ingrese la edad del nodo a eliminar: ";
                cin >> edad;
                cout << "Ingrese el nombre del nodo a eliminar: ";
                cin.ignore();
                getline(cin, nombre);
                lista.Eliminar(edad, nombre);
                break;
            }
            case 4:
                cout << "Lista actual: ";
                lista.Mostrar();
                break;
            case 5:
                cout << "Lista en orden inverso: ";
                lista.MostrarReversa();
                break;
            case 6:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción inválida. Inténtelo de nuevo." << endl;
                break;
        }
    } while (opcion != 6);

    return 0;
}
