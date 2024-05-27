#ifndef SepararVocalesConsonantes_H
#define SepararVocalesConsonantes_H

#include <iostream>
#include <functional>
#include <string>
using namespace std;

template <typename T>
void IngresarString(T& f);

template <typename T>
void SepararVocalesConsonantes(const T& f, size_t index, string& vocales, string& consonantes, function<void()> imprimirResultado);

#endif
