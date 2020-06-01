#include "envio.h"
#include "paquete.h"
#include "sobre.h"

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
