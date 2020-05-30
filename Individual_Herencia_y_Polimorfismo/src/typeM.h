#ifndef SRC_typeM_H
#define SRC_typeM_H
#include "MyGame.h"
class typeM: protected MyGame{   
public:
    typeM(int, int,int,int,int,int,int,char);
};


typeM::typeM(int _tiles, int _snakes, int _ladders,  int _penalty, int _reward, int _n_players, int _turns, char _game_type){
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