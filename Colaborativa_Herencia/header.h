#ifndef COLABORATIVA_HERENCIA_HEADER_H
#define COLABORATIVA_HERENCIA_HEADER_H
#include <iostream>
using namespace std;

class envio
{
    public:
        double calcula_costo(double costo_extra){
            return (costo_estandar+costo_extra);
        };
    protected:
        string r_nombre, r_direccion, r_ciudad, r_estado, d_nombre, d_direccion, d_ciudad, d_estado;
        int r_cp{},d_cp{};
        double costo_estandar{};

};



/*9. La clase "Sobre" debe redefinir el cálculo de la función miembro "calculaCosto" para que, en caso de que las 
dimensiones del sobre sean mayores a 25 * 30 cm en largo o en ancho, se agregue un cargo adicional. 
El cargo adicional debe ser un dato miembro de la clase "Sobre".*/



class sobre: protected envio
{
private:
    double largo,ancho,costo;
public:
    sobre();
    sobre(string,string,string,string,string,string,string,string,int, int, double,double,double);

};

sobre::sobre(){
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
    costo=calcula_costo(0);
}



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
    double _costo_estandar,
    double _largo,
    double _ancho
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
        ancho=_ancho;
        largo=_largo;
        if((largo*ancho)>750){
        costo=calcula_costo(20);
        }else{
            costo=calcula_costo(0);
        }
        
}




class paquete : protected envio
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
    costo=calcula_costo(costo_kilogramo*peso);
}
paquete::paquete(string _r_nombre,string _r_direccion,string _r_ciudad,string _r_estado,string _d_nombre,string _d_direccion,
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
        costo=calcula_costo((costo_kilogramo*peso));
    }
#endif