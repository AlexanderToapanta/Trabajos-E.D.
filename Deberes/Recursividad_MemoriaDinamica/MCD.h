#ifndef MCD_H
#define MCD_H
#include<functional>
#include<iostream>
using namespace std;
template <typename T>
void IngresarNumeros(T& n1,T& n2);
template<typename T>
T cal_MCD(T a,T b,function<T(T,T)>mcd);
#endif