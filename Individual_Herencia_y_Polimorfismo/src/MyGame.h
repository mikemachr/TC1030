#ifndef SRC_MyGame_H
#define SRC_MyGame_H
using namespace std;
#include <vector>
#include <cstdlib>
#include <iostream>
#include <ctime>
class MyGame{
    protected:
    
    int tiles,snakes,ladders,penalty,reward,n_players,turns;
    
    string game_type;
    
    vector<string> board;

    void fillBoard(){
        int n;
        for (int i = 0; i < board.size(); i++){
            board[i]="N";
        }
                
    }
    vector<string> setBoard(){
        board.resize(tiles);
        fillBoard();
        return board;
    }

};

#endif
