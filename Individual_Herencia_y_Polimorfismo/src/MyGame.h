#ifndef SRC_MyGame_H
#define SRC_MyGame_H
#include <vector>
#include "dado.h"
using namespace std;
class MyGame{
    public:
    virtual int play()=0;    
    protected:
    
    int tiles,snakes,ladders,penalty,reward,n_players,max_turns;
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
        int allowed=board.size()-2;
        for (int i = 0; i < board.size(); i++){
            board[i]="N";
        }
        for (int  i = 0; i < snakes; i++){
            int candidate;
            srand(time(0));
            candidate=(rand() % allowed) + 1;
            if (board[candidate]!="S"){
                board[candidate]="S";}
               else{i--;}
        }
        for (int  i = 0; i < ladders; i++){
            int candidate;
            srand(time(0));
            candidate=(rand() % allowed) + 1;
            if (board[candidate]!="S"&&board[candidate]!="L"){
                board[candidate]="L";}
               else{i--;}
        }                 
    }


string MyGame::disp(int position,string player){
        if(position>(board.size()-1)){
            position=board.size()-1;
        }
        string temp=board[position];
        board[position]=player;
        for (int i = 0; i <(tiles) ; i++){
            if (((i)%5==0)&&i!=0){
                cout<<endl;
            }
            cout<<board[i]<<"\t"; 
        }
        cout<<endl<<endl<<endl;
        board[position]=temp;
        return board[position];
    }
/*int MyGame::play(){
    return 0;
}*/
#endif
