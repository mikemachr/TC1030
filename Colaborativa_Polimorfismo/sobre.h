#ifndef COLABORATIVA_POLIMORFISMO_SOBRE_H
#define COLABORATIVA_POLIMORFISMO_SOBRE_H
#include "envio.h"
/*Clase Paquete*/
class Paquete : public Envio
{
    public:
        Paquete();
        Paquete(string nomRem, string dirRem, string cdRem, string estRem, int cpRem, string nomDest, string dirDest, string cdDest, string estDest, int cpDest, double cargoEst, double profundidad, double peso, double costo);
        double getProfundidad();
        double getPeso();
        double getCosto();
        void setProfundidad(double);
        void setPeso(double);
        void setCosto(double);
        double calculaCosto();

    private:
        double dProfundidad, dPeso, dCostoKG;

};

Paquete::Paquete() : Envio()
{
    dProfundidad = 0;
    dPeso = 0;
    dCostoKG = 0;
}

Paquete::Paquete(string nomRem, string dirRem, string cdRem, string estRem, int cpRem, string nomDest, string dirDest, string cdDest, string estDest, int cpDest, double cargoEst, double profundidad, double peso, double costo) : Envio(nomRem, dirRem, cdRem, estRem, cpRem, nomDest, dirDest, cdDest, estDest, cpDest, cargoEst)
{
    dProfundidad = profundidad;
    dPeso = peso;
    dCostoKG = costo;
}

double Paquete::getProfundidad()
{
    return dProfundidad;
}

double Paquete::getPeso()
{
    return dPeso;
}

double Paquete::getCosto()
{
    return dCostoKG;
}

void Paquete::setProfundidad(double profundidad)
{
    dProfundidad = profundidad;
}

void Paquete::setPeso(double peso)
{
    dPeso = peso;
}

void Paquete::setCosto(double costo)
{
    dCostoKG = costo;
}

double Paquete::calculaCosto()
{
    return (dCostoEst + (dPeso * dCostoKG));
}

#endif