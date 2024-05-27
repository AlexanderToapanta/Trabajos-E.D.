#ifndef ContarVocales_H
#define ContarVocales_H

#include <iostream>
#include <functional>
#include <string>
using namespace std;
template <typename T>
void IngresarString(T& f);

template <typename T>
void ContarVocales(const T& f, size_t index, int& a, int& e, int& i, int& o, int& u, function<void()> imprimirResultado);

#endif 
