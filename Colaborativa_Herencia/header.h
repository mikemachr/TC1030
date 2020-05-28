#ifndef COLABORATIVA_HERENCIA_HEADER_H
#define COLABORATIVA_HERENCIA_HEADER_H
#include <iostream>
using namespace std;



class envio
{
    public:
        envio();
        double calcula_costo(double costo_extra){
            return (costo_estandar+costo_extra);
        };
    //protected:
        string r_nombre, r_direccion, r_ciudad, r_estado, d_nombre, d_direccion, d_ciudad, d_estado;
        int r_cp{},d_cp{};
        double costo_estandar{};

};

envio::envio(){
    r_nombre= "Name";
    r_direccion="Address";
    r_ciudad="City";
    r_estado="State";
    r_cp=000000;
    d_nombre="Name";
    d_direccion="Address";
    d_ciudad="City";
    d_estado="State";
    d_cp=000000;
    costo_estandar=0;
}

class sobre: public envio
{
private:

public:
    sobre(string,string,string,string,string,string,string,string,int, int, double);

};

sobre::sobre(
    string _r_nombre,
    string _r_direccion,
    string _r_ciudad,
    string _r_estado,
    string _d_nombre,
    string _d_direccion,
    string _d_ciudad,
    string _d_estado,
    int _r_cp,
    int _d_cp,
    double _costo_estandar
    ){
        r_nombre=_r_nombre;
        r_direccion=_r_direccion;
        r_ciudad=_r_direccion;
        r_estado=_r_estado;
        r_cp=_r_cp;
        d_cp=_d_cp;
        costo_estandar=_costo_estandar;
        d_estado=_d_estado;
        d_ciudad=_d_direccion;
        d_direccion=_d_direccion;
        d_nombre=_d_nombre;
}




class paquete : public envio
{
private:
    double largo,ancho, profundidad, peso, costo_kilogramo,costo;    
public:
    paquete();
    paquete(string,string,string,string,string,string,string,string,int,int,double, double, double, double, double,double);
};

paquete::paquete(){
    r_nombre= "Name";
    r_direccion="Address";
    r_ciudad="City";
    r_estado="State";
    r_cp=000000;
    d_nombre="Name";
    d_direccion="Address";
    d_ciudad="City";
    d_estado="State";
    d_cp=000000;
    costo_estandar=0;
    largo=0;
    ancho=0;
    profundidad=0;
    peso=0;
    costo_kilogramo=0;
    costo=calcula_costo(costo_kilogramo*costo_kilogramo);
}
paquete::paquete(
    string _r_nombre,
    string _r_direccion,
    string _r_ciudad,
    string _r_estado,
    string _d_nombre,
    string _d_direccion,
    string _d_ciudad,
    string _d_estado,
    int _r_cp,
    int _d_cp,
    double _costo_estandar,
    double _largo,
    double _ancho,
    double _profundidad, 
    double _peso, 
    double _costo_kilogramo){
        r_nombre=_r_nombre;
        r_direccion=_r_direccion;
        r_ciudad=_r_direccion;
        r_estado=_r_estado;
        r_cp=_r_cp;
        d_cp=_d_cp;
        costo_estandar=_costo_estandar;
        d_estado=_d_estado;
        d_ciudad=_d_direccion;
        d_direccion=_d_direccion;
        d_nombre=_d_nombre;
        largo=_largo;
        ancho=_ancho;
        profundidad=_profundidad;
        peso=_peso;
        costo_kilogramo=_costo_kilogramo;
        costo=calcula_costo((costo_kilogramo*costo_kilogramo));
    }



#endif