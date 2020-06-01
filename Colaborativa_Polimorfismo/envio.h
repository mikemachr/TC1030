/*Clase Envio*/
#ifndef COLABORATIVA_POLIMORFISMO_ENVIO_H
#define COLABORATIVA_POLIMORFISMO_ENVIO_H
using namespace std;

#include <array>
#include <iostream>
#include <iomanip>
#include <string.h>

class Envio
{
    public:
        Envio();
        Envio(string, string, string, string, int, string, string, string, string, int, double);
        /*string getNombre();
        void setNombre(string);
        int getEdad();
        void setEdad(int); */
        void muestraDatos();
        virtual double calculaCosto();

    protected:
        string sNombreRem, sDireccionRem, sCiudadRem, sEstadoRem, sNombreDest, sDireccionDest, sCiudadDest, sEstadoDest;
        int iCPRem, iCPDest;
        double dCostoEst;
};
Envio::Envio()
{
    sNombreRem = "";
    sDireccionRem = "";
    sCiudadRem = "";
    sEstadoRem = "";
    iCPRem = 0;
    sNombreDest = "";
    sDireccionDest = "";
    sCiudadDest = "";
    sEstadoDest = "";
    iCPDest = 0;
    dCostoEst = 0;
}

Envio::Envio(string nomRem, string dirRem, string cdRem, string estRem, int cpRem, string nomDest, string dirDest, string cdDest, string estDest, int cpDest, double cargoEst)
{
    sNombreRem = nomRem;
    sDireccionRem = dirRem;
    sCiudadRem = cdRem;
    sEstadoRem = estRem;
    iCPRem = cpRem;
    sNombreDest = nomDest;
    sDireccionDest = dirDest;
    sCiudadDest = cdDest;
    sEstadoDest = estDest;
    iCPDest = cpDest;
    dCostoEst = cargoEst;
}

double Envio::calculaCosto()
{
    return dCostoEst;
}

void Envio::muestraDatos() {
    cout << "Datos del remitente: " << endl;
    cout << "   Nombre:  " << sNombreRem << endl;
    cout << "   Direccion: " << sDireccionRem << endl;
    cout << "   Ciudad:  " << sCiudadRem << endl;
    cout << "   Estado:  " << sEstadoRem << endl;
    cout << "   C.P. : " << iCPRem << endl;
    cout << endl;
    cout << "Datos del destinatario: " << endl;
    cout << "   Nombre:  " << sNombreDest << endl;
    cout << "   Direccion: " << sDireccionDest << endl;
    cout << "   Ciudad:  " << sCiudadDest << endl;
    cout << "   Estado:  " << sEstadoDest << endl;
    cout << "   C.P. : " << iCPDest << endl;
    cout << endl;
    cout << "Costo del envio: $" << calculaCosto() << endl;
    cout << endl;
}
#endif