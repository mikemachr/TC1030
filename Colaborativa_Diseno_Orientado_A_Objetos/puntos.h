#ifndef Colaborativa_Diseno_Orientado_A_Objetos_PUNTOS_H
#define Colaborativa_Diseno_Orientado_A_Objetos_PUNTOS_H
#include <iostream>
#include<cmath>
using namespace std;
class puntos
{
private:
public:
    puntos(){
        x=0;
        y=0;
        cout<<"Point created with coordinates 0,0"<<endl;
    };
    puntos(double x,double y);
    double x{},y{};
    double distancia_origen(puntos punto);
    double distancia_punto(puntos punto1, puntos punto2);
};

puntos::puntos(double px, double py)
{
    x=px;
    y=py;
    cout<<"Point created with coordinates "<<x<<","<<y<<endl;
}

double puntos::distancia_origen(puntos punto)
{
    double dp=sqrt(pow(punto.x,2)+pow(punto.y,2));
    cout<<"Distance from point to origin is "<<dp<<endl;
    return dp;
}
double puntos::distancia_punto(puntos p1, puntos p2){
    double dp=sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
    cout<<"Distance from point to origin is "<<dp<<endl;
    return dp;
}
#endif //DISENO_ORIENTADO_A_OBJETOS_PUNTOS_H
