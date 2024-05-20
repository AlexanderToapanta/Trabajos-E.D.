#include<iostream>
#include "I_contador.h"
using namespace std;
void Contador::imprimir()
{
   cout << "Contador: " << count << endl;
}

void Contador::operator--(int)
{
   count--;
}
