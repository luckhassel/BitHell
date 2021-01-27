#ifndef TABULEIRO_H
#define TABULEIRO_H

class Tabuleiro{

    public: 
        Tabuleiro(int);
        const void mostrar_labirinto();
        int posicao_atual_x;
        int posicao_atual_y;
        int posicao_final_x;
        int posicao_final_y;
        int pecas[40][80];
    private:
        const void cercar_tabuleiro();
        const void colocar_inicio();
        const void colocar_saida();
        int dimensoes;
};

#endif