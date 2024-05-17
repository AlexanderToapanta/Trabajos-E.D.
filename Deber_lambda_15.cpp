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

void Separar_palabras(list<T>&palabras,list<T>&vocales,list<T>&consonates){
    for(const auto& palabra:palabras){
    char primera_le = palabra[0];
    if(primera_le=='a'||primera_le=='e'||primera_le=='i'||primera_le=='o'||primera_le=='u'){
        vocales.push_back(palabra);
    } else{
        consonates.push_back(palabra);
    }
    }

}
int main(){
  list<string> palabras = {"avion", "banana", "oro", "pera", "gato", "uva", "pelo", "melon", "iguana", "madrastra"};
    list<string> vocales;
    list<string> consonantes;

    Separar_palabras(palabras, vocales, consonantes);

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