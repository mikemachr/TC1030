#include <iostream>
#include "dado.h"
class Mygame{
private:
    bool turn_control=true; 
    int turn=1,p1_position=1,p2_position=1;
    string p1,p2,tablero[31]{};
public:
    Mygame();
    void start(Mygame partida){
        int this_turn=1;
        cout<<"Enter name for player 1"<<endl;
        cin>>p1;
        cout<<"Enter name for player 2"<<endl;
        cin>>p2;
        cin.get();
     while(1){
        if(p1_position>=30||p2_position>=30||this_turn==0){
            cout<<"Game over"<<endl;
            if (turn_control){
                cout<<p1<<" wins"<<endl;
            }else{
                cout<<p2<<" wins"<<endl;
            }
            
            break;
        }
        if(turn_control){
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
        string tile_type,choice;
        cout<<"Turn #"<<turn<<endl;
        cout<<"It's "<<player<<"'s turn"<<endl;
        cout<<"You currnetly lie on tile #"<<position<<endl;
        disp(partida,position,player);
        while (1)
        {
            cin>>choice;
            if(choice=="C"||choice=="E"){
                break;}
            cout<<"Invalid option, please press C to continue next turn or E to end the game"<<endl;
        }
        if (choice=="E")
        {
            cout<<player<<" ended the game"<<endl;
            cout<<"Since game was ended, the winner will be decided by highest score"<<endl;
            return 0;
        }
        Dado d;
        cout<<"You got a "<<d.get_roll(d)<<endl;
        //aqui van los ifs de las casillas especiales
        cout<<"That puts you in tile #"<<position+d.get_roll(d)<<endl;
        turn ++;
        tile_type=disp(partida,position+d.get_roll(d),player);
        if (tile_type=="N"){
            return d.get_roll(d);  
        }
        if (tile_type=="L"){
            cout<<"Since tile "<<position<<" is a ladder, you move 3 aditional tiles"<<endl;
            disp(partida,position+d.get_roll(d)+3,player);
            return d.get_roll(d);  
        }
        if (tile_type=="S"){
            cout<<"Since tile "<<position<<" is a snake, you move back 3 tiles"<<endl;
            disp(partida,position+d.get_roll(d)-3,player);
            return d.get_roll(d);  
        }
        
        
    }
    string disp(Mygame partida,int position,string player){
        string temp=partida.tablero[position];
        partida.tablero[position]=player;
        for (int i = 1; i <31 ; i++){
            cout<<partida.tablero[i]<<"\t";
            if (((i)%5==0)){
                cout<<endl;
            } 
        }
        partida.tablero[position]=temp;
        return partida.tablero[position];
        
    }

};

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
    Mygame game;
    game.start(game);
    return 0;
}