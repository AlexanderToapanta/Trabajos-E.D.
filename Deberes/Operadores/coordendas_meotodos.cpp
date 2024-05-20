#include<iostream>
#include "I_coordenadas.h"
using namespace std;
bool Coordenas::operator== (const Coordenas &obj){
            return (x==obj.x && y==obj.y);
        }