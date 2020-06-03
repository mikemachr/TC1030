#include "typeA.h"
#include "typeM.h"
#include "MyGame.h"
int main(){
    typeA ANormal;
    ANormal.start();
    typeA ACustom(50,3,3,3,5,3,30);
    ACustom.start();
    typeM BNormal;
    BNormal.start();
    typeM BCustom(10,2,3,3,5,2,3);
    BCustom.start();
    /*apundator para demostrar el polimorfismo funcionando, debbugear con un breakpoint en 
    la linea 19 y observar el contenido de el arreglo juegos*/
    MyGame* juegos[4];
    juegos[0] = &ANormal;
    juegos[1]=&BNormal;
    juegos[2]=&ACustom;
    juegos[3]=&BCustom;
    cin.get(); 
}