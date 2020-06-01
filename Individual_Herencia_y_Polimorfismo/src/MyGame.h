#ifndef SRC_MyGame_H
#define SRC_MyGame_H
using namespace std;
#include <vector>
#include <cstdlib>
#include <iostream>
#include <ctime>

class MyGame{
    protected:
    
    int tiles,snakes,ladders,penalty,reward,n_players,maxTurns;
    
    string game_type;
    vector<string> board,players;
    vector<string> setBoard();
    vector<string> setPlayers();
    void fillBoard();
    string disp(int, string);
};
vector<string> MyGame::setBoard(){
    board.resize(tiles);
    fillBoard();
    return board;
    }
vector<string> MyGame:: setPlayers(){
    players.resize(n_players);
    string n;
    for (int  i = 0; i < players.size(); i++){
        cout<<"Enter player "<<i+1<<" name"<<endl;
        cin>>n;
        players[i]=n;
    }
    return players;
}

void MyGame::fillBoard(){
        int n;
        for (int i = 0; i < board.size(); i++){
            board[i]="N";
        }         
    }


string MyGame::disp(int position,string player){

        string temp=board[position];
        board[position]=player;
        for (int i = 0; i <9 ; i++){
            cout<<board[i]<<"\t";
            if (((i)%5==0)){
                cout<<endl;
            } 
        }
        board[position]=temp;
        return board[position];
    }
#endif
