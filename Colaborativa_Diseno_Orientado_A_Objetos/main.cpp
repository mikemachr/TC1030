#include "puntos.h"
int main(){
    double coordX, coordY;
    cout<<"Set x for point"<<endl;
    cin>>coordX;
    cout<<"Set y for point"<<endl;
    cin>>coordY;
    puntos p1(coordX,coordY);
    puntos p2;
    cout<<"x"<<p1.x<<endl;
    cout<<"y"<<p1.y<<endl;
    p1.distancia_origen(p1);
    p1.distancia_punto(p1,p2);
}
