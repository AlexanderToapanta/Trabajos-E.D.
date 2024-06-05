/***********************************************************************
 * Module:  Lista_Doble.cpp
 * Author:  Usuario
 * Modified: mi�rcoles, 29 de mayo de 2024 18:54:14
 * Purpose: Implementation of the class Lista_Doble
 ***********************************************************************/

#include "Lista_Doble.h"
#include <iostream>
#include <algorithm>
#include <cctype>
#include <fstream>

using namespace std;

Lista_Doble::Lista_Doble() : cabeza(nullptr), cola(nullptr) {}

Lista_Doble::~Lista_Doble() {
    while (cabeza != nullptr) {
        Nodo* temp = cabeza;
        cabeza = cabeza->getSiguiente();
        delete temp;
    }
}



void Lista_Doble::Insertar(string& N1, string& N2, string& Ape, int count) {
    Nodo* nuevoNodo = new Nodo(N1, N2, Ape);
    if (cabeza == nullptr) {
        cabeza = nuevoNodo;
        cola = nuevoNodo;
    } else {
        cola->setSiguiente(nuevoNodo);
        nuevoNodo->setAnterior(cola);
        cola = nuevoNodo;
    }
    Comprobar_existencia(N1, N2, Ape, count, nuevoNodo);
}
void Lista_Doble::Comprobar_existencia(string& N1, string& N2, string& Ape, int count, Nodo* nodo) {
    count = -1;
    Nodo* actual = cabeza;

    while (actual != nullptr) {
        if (actual->getNombre1() == N1 && actual->getNombre2() == N2 && actual->getApellido() == Ape) {
            count++;
        }
        actual = actual->getSiguiente();
    }

    string correo = crearCorreo(N1, N2, Ape, count, "espe.edu.ec");
    nodo->setCorreo(correo);
}

string Lista_Doble::crearCorreo(string& N1, string& N2, string& Ape, int count, string dominio) {
    if (N1.empty() || N2.empty() || Ape.empty()) {
        std::cerr << "Error: Los nombres y el apellido no deben estar vacíos" << std::endl;
    }

    char inicialN1 = tolower(N1[0]);
    char inicialN2 = tolower(N2[0]);

    std::string apellidoMinusculas = Ape;
    transform(apellidoMinusculas.begin(), apellidoMinusculas.end(), apellidoMinusculas.begin(), ::tolower);
    std::string correo;
    if (count <= 0) {
        correo = std::string(1, inicialN1) + std::string(1, inicialN2) + apellidoMinusculas + "@" + dominio;
    } else {
        correo = std::string(1, inicialN1) + std::string(1, inicialN2) + apellidoMinusculas + std::to_string(count) + "@" + dominio;
    }
    
    return correo;
}

void Lista_Doble::Eliminar(string& N1, string& N2, string& Ape) {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        if (actual->getNombre1() == N1 && actual->getNombre2() == N2 && actual->getApellido() == Ape) {
            if (actual->getAnterior() != nullptr) {
                actual->getAnterior()->setSiguiente(actual->getSiguiente());
            } else {
                cabeza = actual->getSiguiente();
            }
            if (actual->getSiguiente() != nullptr) {
                actual->getSiguiente()->setAnterior(actual->getAnterior());
            } else {
                cola = actual->getAnterior();
            }
            delete actual;
            cout << "Nodo eliminado" << endl;
            cout << "Correo del nodo eliminado: "  << endl;
            return;
        }
        actual = actual->getSiguiente();
    }
    cout << "Nodo no encontrado para eliminar" << endl;
}

void Lista_Doble :: Buscar(string& N1, string& N2, string& Ape){
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        if (actual->getNombre1() == N1 && actual->getNombre2() == N2  &&  actual->getApellido()==Ape) {
            cout << "Nodo encontrado:\n" << "N1 = " << actual->getNombre1() 
            << ", \nNombre2 = " << actual->getNombre2()
            << ", \nApellido = " << actual->getApellido() 
            << ", Correo = "<<actual->getCorreo()
            <<endl;
            return;
        }
        actual = actual->getSiguiente();
    }
    cout << "Nodo no encontrado" << endl;
}


void Lista_Doble::guardarArchivo(const string& nombreArchivo) const {
    ofstream archivo(nombreArchivo);
    if (!archivo) {
        std::cerr << "Error al abrir el archivo: " << nombreArchivo << std::endl;
        return;
    }

    Nodo* actual = cabeza;
    while (actual != nullptr) {
        archivo << "Nombre1: " << actual->getNombre1() 
                << ", Nombre2: " << actual->getNombre2() 
                << ", Apellido: " << actual->getApellido() 
                << ", Correo: " << actual->getCorreo()
                << endl;
        actual = actual->getSiguiente();
    }

    archivo.close();
    cout << "Datos guardados en el archivo: " << nombreArchivo << endl;
}




void Lista_Doble::Mostrar() const {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        cout << "Nombre1: " << actual->getNombre1() 
             << ", Nombre2: " << actual->getNombre2() 
             << ", Apellido: " << actual->getApellido() 
             << " -> <- ";
        actual = actual->getSiguiente();
    }
    cout << "nullptr" << endl;
}


