/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Descipcion del problema: Operador que utliza el ">", para
 * comparar el volumen de dos cajas.
 * Autor:  Alexander Toapanta
 * Fecha de creacion: 19/05/2024
 * Fecha de modificacion: 
 ***********************************************************************/
#include <iostream>
#include "caja_metodos.cpp"
using namespace std;


int main(){
    Caja c1(2,3,4),c2(1,2,6);
    if(c1>c2){
       cout << "La caja c1 es mayor que la caja c2" << endl;
    } else {
        cout << "La caja c1 no es mayor que la caja c2" << endl;
    }
    return 0;
}