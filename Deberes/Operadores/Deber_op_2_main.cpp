/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Descipcion del problema: Operador que utliza el "--", para
 * realizar un contador de forma descendente.
 * Autor:  Alexander Toapanta
 * Fecha de creacion: 19/05/2024
 * Fecha de modificacion: 20/05/2024
 ***********************************************************************/
#include <iostream>
#include "contador_metodos.cpp"
using namespace std;


int main(){
    Contador c;
    c--;
    c.imprimir();
    c--;
    c.imprimir();
    return 0;
}