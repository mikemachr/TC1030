//librerias 
#include <iostream>
#include "dado.h"
//clase my game
class Mygame{
private:
//booleano usado para controlar si es turno del jugador 1 o jugador 2
    bool turn_control=true; 
//Posiciones iniciales, e inicializacion del contador de turno
    int turn=1,p1_position=1,p2_position=1;
//nombres de los jugadores 
    string p1,p2,tablero[31]{};
public:
    Mygame();
    void start(Mygame partida){
//Codigo principal del juego, recibe un objeto como entrada
        int this_turn=1;
//Se reciben los nombres de los jugadores 
        cout<<"Enter name for player 1"<<endl;
        cin>>p1;
        cout<<"Enter name for player 2"<<endl;
        cin>>p2;
//Usado para no iniciar el juego de inmediado, quitar esta linea causa una salida en falso
        cin.get();
//Instrucciones para los jugadores, solo se muestra 1 vez por partida
        cout<<"Press C to continue next turn, or E to end the game:"<<endl;
     while(1){
/*Aqui se comprueban las condiciones de la fin del juego, que son 3: jugador 1 gana, jugador 2 gana, o alguien se rinde, si se cumple 
alguna, se verifica que jugador tiene la mas alta puntuacion, se le felicita, y se imprime game over,ademas de romper el while 
que controla la totalidad del juego*/
        if(p1_position>=30||p2_position>=30||this_turn==0){
            cout<<" -- GAME OVER --"<<endl<<endl;
            if (p1_position>p2_position){
                cout<<p1<<" wins!"<<endl;
            }else if(this_turn==0){
                cout<<"Thanks for playing!!!"<<endl;
                }else{
                cout<<p2<<" wins!"<<endl;
                }
            break;
        }
/*Este codigo llama a la funcion play, la cual se puede decir que es cada turno individual de cada jugador, si el booleano de control
es verdadero, es turno del jugador uno, si no, es turno del otro, al final cambiamos el booleano para cambiar el jugador en turno*/
        if(turn_control){
/*This turn es un entero que nos dice cuantas casillas mover al jugador, tras obtenerlo al ejecutar play, sumamos la posicion actual mas
this turn para tener la nueva posicion*/
            this_turn=play(p1,p1_position,partida);
            p1_position=p1_position+this_turn;
        }else{
            this_turn=play(p2,p2_position,partida);
            p2_position=p2_position+this_turn;
        }
            turn_control=!turn_control;
        }   
    }
    int play(string player,int position,Mygame partida){
/*Desplegamos elturno, y el nombre del jugador en turno, asi como su posicion actual*/
        string tile_type,choice;
        cout<<"Turn #"<<turn<<endl;
        cout<<"It's "<<player<<"'s turn"<<endl;
        cout<<"You currnetly lie on tile #"<<position<<endl;
        disp(partida,position,player);
/*Leemos si el jugador quiere continuar, o acabar, cualquier otra entrada sera ignorada, y se dira que la opcion es invalida, 
recordandole al jugador las 2 unicas opciones*/
        while (1){
            cin>>choice;
            if(choice=="C"||choice=="E"){
                break;}
            cout<<"Invalid option, please press C to continue next turn or E to end the game"<<endl;
            }
//El jugador opta por rendirse, devolvemos 0 como turno actual y esto llevara a activar el caso donde alguien se rinde
        if (choice=="E")
        {
            cout<<player<<" ended the game"<<endl;
            return 0;
        }
//Se crea el dado para la ronda
        Dado d;
//Se despliega el valor obtenido por el dado 
        cout<<"You got a "<<d.get_roll(d)<<endl;
//En base a el roll y a la posicion actual, se determina la nueva posicion
        cout<<"That puts you in tile #"<<position+d.get_roll(d)<<endl;
//Se aumenta el contador de turno
        turn ++;
//Determinamos el tipo de la casilla en la que cayo el jugador
        tile_type=disp(partida,position+d.get_roll(d),player);
        if (tile_type=="N"){
            return d.get_roll(d);  
        }
//Se verifica si el jugador llego a una escalera, si es el caso, se le dan 3 casillas mas, y se le vuelve a mostrar el tablero
        if (tile_type=="L"){
            cout<<"Since tile "<<position+d.get_roll(d)<<" is a ladder, you move 3 aditional tiles"<<endl;
            disp(partida,position+d.get_roll(d)+3,player);
            return d.get_roll(d);  
        }
//Se verifica si el jugador cayo en una serpiente, si es asi se le regresa 3 casillas, y se le vuelve a mostrar el tablero
        if (tile_type=="S"){
            cout<<"Since tile "<<position<<" is a snake, you move back 3 tiles"<<endl;
            disp(partida,position+d.get_roll(d)-3,player);
            return d.get_roll(d);  
        }
//Esta linea en realidad nunca se debe alcanzar
        return 0;
    }
/*Este metodo se usa para desplegar el tablero, y la posicion del jugador actual, recibe el objeto partida, la posicion y el nombre
del jugador*/
    string disp(Mygame partida,int position,string player){
/*Para no perder el tipo de casilla tras desplegar la posicion del jugador, se guarda el tipo de la misma antes de desplegar 
la posicion del jugador*/
        string temp=partida.tablero[position];
/*Ahora cambiamos la letra de la casilla en la que se encuentra el jugador por el nombre del mimso*/ 
        partida.tablero[position]=player;
/*Se despliega el tablero, cabe mencionar que como se nos pidio que cada casilla se identifique como un numero natural del 1 al 30, la 
casilla 0 queda sin usar y no se imprime, por eso el for inicia en 1*/
        for (int i = 1; i <31 ; i++){
            cout<<partida.tablero[i]<<"\t";
            if (((i)%5==0)){
                cout<<endl;
            } 
        }
/*Restauramos la letra de la casilla del jugador a su valor original*/
        partida.tablero[position]=temp;
        return partida.tablero[position];
    }
};
//constructor de la clase, se inicializan las casillas especiales, y se delimita el tablero, asi como especificar el tipo de casilla
Mygame::Mygame(){
    int l1=5,l2=16,l3=20;
    int s1=8,s2=20,s3=27;
    for (int i = 1; i < 31; i++){
        if (i!=l1||i!=l2||i!=l3||i!=s1||i!=s2||i!=s3){
            tablero[i]="N";
        }
        if (i==l1||i==l2||i==l3){
            tablero[i]="L";
        }
        if (i==s1||i==s2||i==s3){
            tablero[i]="S";
        }            
    }
}

int main(){
//se crea la instancia game 
    Mygame game;
//se llama el metodo start dentro de la instancia game 
    game.start(game);
    return 0;
}