#ifndef SepararNumerosLetras_H
#define SepararNumerosLetras_H

#include <iostream>
#include <functional>
#include <string>
using namespace std;

template <typename T>
void IngresarString(T& f);

template <typename T>
void SepararNumerosLetras(const T& f, size_t index, string& numeros, string& letras, function<void()> imprimirResultado);

#endif
