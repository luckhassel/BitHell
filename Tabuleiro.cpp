#include "Tabuleiro.h"
#include "Jogabilidade.h"

#include <cstdlib>
#include <iostream>

Tabuleiro::Tabuleiro(int dimensao){
    Tabuleiro::dimensoes = dimensao;
    for (int i=1; i <= dimensao; i++){
        for (int j=1; j <= dimensao*2; j++){
            Tabuleiro::pecas[i][j] = rand() % 2;
        }
    }
    Tabuleiro::cercar_tabuleiro();
    Tabuleiro::colocar_inicio();
    Tabuleiro::colocar_saida();
}

const void Tabuleiro::mostrar_labirinto(){
    for (int i=1; i <= Tabuleiro::dimensoes; i++){
        for (int j=1; j <= Tabuleiro::dimensoes*2; j++){
            std::cout << Tabuleiro::pecas[i][j];
        }
        std::cout << "\n";
    }
}

const void Tabuleiro::cercar_tabuleiro(){
    for (int i=0; i <= Tabuleiro::dimensoes + 1; i++){
        Tabuleiro::pecas[0][i] = 1;
        Tabuleiro::pecas[dimensoes + 1][i] = 1;
    }

    for (int j=1; j <= Tabuleiro::dimensoes; j++){
        Tabuleiro::pecas[j][0] = 1;
        Tabuleiro::pecas[j][dimensoes*2 + 1] = 1;
    }

}

const void Tabuleiro::colocar_inicio(){
    Tabuleiro::posicao_atual_x = rand()%(Tabuleiro::dimensoes/2) + 1;
    Tabuleiro::posicao_atual_y = rand()%(Tabuleiro::dimensoes) + 1;
    
    Tabuleiro::pecas[Tabuleiro::posicao_atual_x][Tabuleiro::posicao_atual_y] = 8;
}

const void Tabuleiro::colocar_saida(){
    Tabuleiro::posicao_final_x = rand()%(Tabuleiro::dimensoes) + 1;
    Tabuleiro::posicao_final_y = rand()%(Tabuleiro::dimensoes*2) + 1;
    
    Tabuleiro::pecas[Tabuleiro::posicao_final_x][Tabuleiro::posicao_final_y] = 5;
}