#include "Lista_Doble.cpp"
#include <iostream>
#include <string>

using namespace std;

int menu() {
    int opcion;
    cout << "\n--- Menú ---" << endl;
    cout << "1. Insertar Nodo" << endl;
    cout << "2. Eliminar Nodo" << endl;
    cout << "3. Buscar Nodo" << endl;
    cout << "4. Guardar en Archivo" << endl;
    cout << "5. Mostrar Lista" << endl;
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
    int count=0;

    int opcion;
    do {
        opcion = menu();

        switch (opcion) {
            case 1: {
                string nombre1,nombre2,ape;
                cout << "Ingrese el primer nombre del nuevo nodo: ";
                cin >> nombre1;
                cout << "Ingrese el segundo nombre del nuevo nodo: ";
                cin >> nombre2;
                cout << "Ingrese el apellido del nuevo nodo: ";
                cin >> ape;
                lista.Insertar(nombre1, nombre2,ape,count);
                break;
            }
            case 2: {
                string nombre1,nombre2,ape;
                cout << "Ingrese el primer nombre del nuevo nodo: ";
                cin >> nombre1;
                cout << "Ingrese el segundo nombre del nuevo nodo: ";
                cin >> nombre2;
                cout << "Ingrese el apellido del nuevo nodo: ";
                cin >> ape;
                lista.Eliminar(nombre1, nombre2,ape);
                break;
            }
            
            case 3:{
                string nombre1,nombre2,ape;
                cout << "Ingrese el primer nombre del nodo a buscar: ";
                cin >> nombre1;
                cout << "Ingrese el segundo nombre del nodo a buscar: ";
                cin >> nombre2;
                cout << "Ingrese el apellido del nodo a buscar: ";
                cin >> ape;
                lista.Buscar(nombre1, nombre2, ape);
                break;
            }
            case 4:
                lista.guardarArchivo("C:\\Users\\Usuario\\Documents\\EstructuradeDatos\\Deberes\\Trabajo_Gallo_Toapanta_Solano\\list.txt");
                break;
            case 5:
                cout << "Lista actual: ";
                lista.Mostrar();
                break;
            case 6:
            cout << "Saliendo del programa...." << endl;
            break;
        }
    } while (opcion != 5);

    return 0;
}
