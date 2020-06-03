#ifndef SRC_typeA_H
#define SRC_typeA_H
#include "MyGame.h"
class typeA: public MyGame{   

public:
    typeA(int, int,int,int,int,int,int);
    typeA();
    int play();     
    void start();
   
};

typeA::typeA(int _tiles, int _snakes, int _ladders,  int _penalty, int _reward, int _n_players, int _maxTurns){
    tiles=_tiles;
    snakes=_snakes;
    ladders=_ladders;
    penalty=_penalty;
    reward=_reward;
    n_players=_n_players;
    max_turns=_maxTurns;
    game_type="A";
    board=setBoard();
    players=setPlayers();
}
typeA::typeA(){
    tiles=30;
    snakes=3;
    ladders=3;
    penalty=3;
    reward=3;
    n_players=2;
    max_turns=30;
    game_type="A";
    board=setBoard();
    players=setPlayers();
}

int typeA::play(){
    vector<int> positions;
    int turns=1,current_roll,current_pos;
    string type,choice;
    positions.resize(n_players);
    while(1){

        for (int i = 0; i < players.size(); i++){

            cout<<players[i]<<" you are in tile #"<<positions[i]+1<<endl;
            disp(positions[i],players[i]);
            Dado dice;
            current_roll=dice.get_roll(dice);
            cout<<"You got a "<<current_roll<<endl;
            current_pos=positions[i]+current_roll;
            type=disp(current_pos,players[i]);
            if (type=="S"){
                cout<<"Since tile "<<current_pos+1<<" its a snake";
                cout<<" you go back "<<penalty<<" spaces"<<endl;
                current_pos=current_pos-penalty;
                disp(current_pos,players[i]);
            }
            if (type=="L"){
                cout<<"Since tile "<<current_pos+1<<" its a ladder";
                cout<<" you go forward "<<reward<<" spaces"<<endl;
                current_pos=current_pos+reward;
                disp(current_pos,players[i]);
            }
            positions[i]=current_pos;
            if (positions[i]>=(board.size()-1)){
                cout<<players[i]<<" wins"<<endl;
                return 1;
            }
        }
        turns++;
        if (turns==max_turns){
            cout<<"The maximum number of turns has been reached, game over"<<endl;
            return 0;
        }
        
    }
    return 1;
}


void typeA::start(){
    play();
}
#endif