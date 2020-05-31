#ifndef SRC_typeA_H
#define SRC_typeA_H
#include "MyGame.h"
class typeA: protected MyGame{   

public:

    typeA(int, int,int,int,int,int,int,string);
    
};

typeA::typeA(int _tiles, int _snakes, int _ladders,  int _penalty, int _reward, int _n_players, int _turns, string _game_type){
    tiles=_tiles;
    snakes=_snakes;
    ladders=_ladders;
    penalty=_penalty;
    reward=_reward;
    n_players=_n_players;
    turns=_turns;
    game_type=_game_type;
}
#endif