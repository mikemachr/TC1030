#ifndef SRC_typeM_H
#define SRC_typeM_H
#include "MyGame.h"
class typeM: protected MyGame{  

public:
    typeM(int, int,int,int,int,int,int,string);
    typeM();
    void start(typeM game);


    void fillBoard(int nSnakes,int nLadders){
        for (int i = 0; i < board.size(); i++){
            board[i]="N";
        }
    }
    vector<string> setBoard(int _size){
        board.resize(_size);
        fillBoard(snakes,ladders);
        return board;
    }
};

typeM::typeM(int _tiles, int _snakes, int _ladders,  int _penalty, int _reward, int _n_players, int _turns, string _game_type){
    tiles=_tiles;
    snakes=_snakes;
    ladders=_ladders;
    penalty=_penalty;
    reward=_reward;
    n_players=_n_players;
    turns=_turns;
    game_type=_game_type;
    board=setBoard(_tiles);
}

typeM::typeM(){
    tiles=30;
    snakes=3;
    ladders=3;
    penalty=3;
    reward=3;
    n_players=2;
    turns=30;
    game_type="A";
    board=setBoard(tiles);
}

#endif