/***********************************************************************
 * Module:  List_Simple.h
 * Author:  Usuario
 * Modified: mi�rcoles, 29 de mayo de 2024 16:33:38
 * Purpose: Declaration of the class List_Simple
 ***********************************************************************/

#if !defined(__Lista_Simple_List_Simple_h)
#define __Lista_Simple_List_Simple_h
#include<string>
#include<iostream>
using namespace std;
class nodo{
   public:
   int Edad;
   string Nombre;
   nodo* siguiente;

nodo(int e, string n): Edad(e),Nombre(n),siguiente(nullptr){}
};

class List_Simple
{
public:
   nodo* getsiguiente(void);
   void setsiguiente(nodo* newSuguiente);
   void Insertar(int E, string N);
   void Buscar(int E, string N);
   void Eliminar(int E, string N);
   void Mostrar( );
   List_Simple(int E, string N, nodo* S);
   ~List_Simple();

protected:
private:
   int Edad;
   string Nombre;
   nodo* siguiente;


};

#endif