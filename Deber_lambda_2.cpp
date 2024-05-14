#include <iostream>
#include <conio.h>
#include <functional>
#include <cmath> 
using namespace std;

int main(){
    float a = 78.34,b=60;
     auto gradosARadianes = [](float grados) { return grados * M_PI / 180.0; };
    auto Coordenada_X = [&gradosARadianes](float a,float b){return a*cos(gradosARadianes(b));};
    auto Coordenada_Y = [&gradosARadianes](float a,float b){return a*sin(gradosARadianes(b));};
    cout<<"Se busca descomponer la velocidad incial de un movimiento parabolico en sus elemento del eje X, Y. La velocidad incial es:"
    << "  "<<a <<"  "<<"el angulo que fomar respecto el eje X es:"<<" "<<b<<" " <<endl;
    cout<< "La velocidad en el eje X es:" << Coordenada_X(a,b)<<" "<<"La velocidad en el eje Y es:"<<
    Coordenada_Y(a,b);
    getch();

}