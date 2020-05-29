#include <array>
#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

/*Clase Envio*/
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
    cout << "Datos del remitente: " << endl;
    cout << "   Nombre:  " << sNombreDest << endl;
    cout << "   Direccion: " << sDireccionDest << endl;
    cout << "   Ciudad:  " << sCiudadDest << endl;
    cout << "   Estado:  " << sEstadoDest << endl;
    cout << "   C.P. : " << iCPDest << endl;
    cout << endl;
    cout << "Costo del envio: $" << calculaCosto() << endl;
    cout << endl;
}

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



/*metodo main*/
int main()
{
    double costoTotaldeEnvios=0;

    Envio envio1("Francisco Pantera","Calle 1","MTY","NL",64000,"Juan de las Casas","Calle 2","SN","NL",12345,50);
    Paquete paquete1("Pedro Rios","Calle 2","SN","NL",15252,"Carolina Garza","Calle 1","Mty","NL",64123,50,45,54,45);
    Sobre sobre1("Guillermo Tell","Calle X","GPE","NL",65245,"Susana Estrella","Calle Y","SP","NL",65244,50,52.2,45,52);

    Envio* listaEnvios[3];

    listaEnvios[0] = &envio1;
    listaEnvios[1] = &paquete1;
    listaEnvios[2] = &sobre1;

    for(int i = 0; i < 3; i++)
    {
        cout << "***************************************" << endl;
        cout<<"Envio #"<<i+1<<" : " << endl;
        listaEnvios[i]->calculaCosto();
        costoTotaldeEnvios = costoTotaldeEnvios + listaEnvios[i]->calculaCosto();
        listaEnvios[i]->muestraDatos();
    }

    cout << "***************************************" << endl;
    cout << "Costo total de envios : $" << costoTotaldeEnvios << endl;
    cout << "***************************************" << endl;
    return 0;
}