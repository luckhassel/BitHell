#ifndef JOGO_H
#define JOGO_H

#include "Tabuleiro.h"

class Jogo: public Tabuleiro{

    public:
        Jogo(int n):Tabuleiro(n){};
        void atirar(char);
        int mover(char);
};

#endif