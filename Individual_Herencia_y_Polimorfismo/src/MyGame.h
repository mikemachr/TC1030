#ifndef SRC_MyGame_H
#define SRC_MyGame_H
using namespace std;
#include "dado.h"
#include <vector>
class MyGame{
    protected:
    int tiles,snakes,ladders,penalty,reward,n_players,turns;
    string game_type;
    vector<string> board; 
  

};

#endif
