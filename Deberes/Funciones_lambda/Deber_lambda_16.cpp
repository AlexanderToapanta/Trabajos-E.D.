/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Descipcion del problema: Funcion que divide palabras que empiezan con vocales en una lista y palabras
 * que empienzan con consonantes en otra.
 * Autor:  Alexander Toapanta
 * Fecha de creacion: 16/05/2024
 * Fecha de modificacion: 
 ***********************************************************************/
#include <iostream>
#include <conio.h>
#include <algorithm>
#include <functional>
#include <list>
#include <string>
using namespace std;

template<typename T>
oid Separar_palabras_numeros(list<T>&palabras,list<T>&numeros,list<T>&letras){
    for(const auto& palabra:palabras){
    if(isdigit(palabra[0])){
        numeros.push_back(palabra);
    } else{
        letras.push_back(palabra);
    }
    }

}
int main(){
  list<string> palabras = {"a", "23", "45", "ra", "33", "uva", "12", "1", "ANA", "007"};
    list<string> numeros;
    list<string> letras;

    Separar_palabras_numeros(palabras, numeros, letras);

    cout << "Palabras que comienzan con vocales:" << endl;
    for (const auto& palabra : vocales) {
        cout << palabra << endl;
    }

    cout << "\nPalabras que comienzan con consonantes:" << endl;
    for (const auto& palabra : consonantes) {
        cout << palabra << endl;
    }


    getch();
}