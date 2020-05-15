#ifndef Individual_Diseno_Orientado_a_Objetos_DADO_H
#define Individual_Diseno_Orientado_a_Objetos_DADO_H
#include <cstdlib>
#include <ctime>

using namespace std;
class Dado{
private:
    int roll{};
public:
    Dado();
    int get_roll(Dado D){
        return D.roll;
    };
};

Dado::Dado(){
    srand(time(0));
    roll = (rand() % 6) + 1;
}

#endif