#include<iostream>
#include "I_vector.h"
using namespace std;

Vector Vector::operator%(const Vector &obj){

    int i = Punto_x*obj.Punt_y;
    int j = Punt_y*obj.Punto_x;
    return Vector(i,j);

}

void Vector::imprimir()  {
        cout << "(" << Punto_x<<"i"<< "," <<"-"<< Punt_y <<"j"<< ")" << endl;
    }
    void Vector::imprimir_d(int det)  {
        cout << "El determinante es: "<<det<< endl;
    }
