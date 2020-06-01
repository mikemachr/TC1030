#ifndef COLABORATIVA_POLIMORFISMO_PAQUETE_H
#define COLABORATIVA_POLIMORFISMO_PAQUETE_H
#include "envio.h"
/*Clase Sobre*/
class Sobre : public Envio
{
    public:
        double cargo;
        Sobre();
        Sobre(string nomRem, string dirRem, string cdRem, string estRem, int cpRem, string nomDest, string dirDest, string cdDest, string estDest, int cpDest, double cargoEst, double cargoAdic, double largo, double ancho);
        void setCargoAdic(double);
        void setLargo(double);
        void setAncho(double);
        double getCargoAdic();
        double getLargo();
        double getAncho();
        double calculaCosto();

    private:
        double dLargo;
        double dAncho;
        double dCargoAdic;
};

Sobre::Sobre() : Envio()
{
    dLargo = 0;
    dAncho = 0;
    dCargoAdic = 0;
}

Sobre::Sobre(string nomRem, string dirRem, string cdRem, string estRem, int cpRem, string nomDest, string dirDest, string cdDest, string estDest, int cpDest, double cargoEst, double cargoAdic, double largo, double ancho) : Envio(nomRem, dirRem, cdRem, estRem, cpRem, nomDest, dirDest, cdDest, estDest, cpDest, cargoEst)
{
    dLargo = largo;
    dAncho = ancho;
    dCargoAdic = cargoAdic;
}

double Sobre::getCargoAdic()
{
    return dCargoAdic;
}

double Sobre::getLargo()
{
    return dCargoAdic;
}

double Sobre::getAncho()
{
    return dCargoAdic;
}

void Sobre::setCargoAdic(double cargoAdic)
{
    dCargoAdic = cargoAdic;
}

void Sobre::setLargo(double largo)
{
    dCargoAdic = largo;
}

void Sobre::setAncho(double ancho)
{
    dCargoAdic = ancho;
}

double Sobre::calculaCosto()
{
    cargo = dCostoEst;

    if(dLargo >= 25 && dAncho >= 30)
        cargo = cargo + dCargoAdic;
    else
    {
        if(dLargo >= 30 && dAncho >= 25)
            cargo = cargo + dCargoAdic;
    }

    return cargo;
}


#endif