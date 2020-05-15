//necesario para que funcione en mi IDE
#ifndef Individual_Diseno_Orientado_a_Objetos_SRC_DADO_H
#define Individual_Diseno_Orientado_a_Objetos_SRC_DADO_H
//librerias
#include <cstdlib>
#include <ctime>
//clase dado
using namespace std;
class Dado{
//su unico data member es roll, que determina el valor que arroja el dado
private:
    int roll{};
public:
//se declara el constructor y el metodo get_roll, este devuelve roll, pues es un data member privado
    Dado();
    int get_roll(Dado D){
        return D.roll;
    };
};
//se construye el dado, roll sera un numero pseudoaleatorio generado con un seed de tiempo, siendo este numero entre 1 y 6
Dado::Dado(){
    srand(time(0));
    roll = (rand() % 6) + 1;
}

#endif