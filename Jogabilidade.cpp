#include "Jogabilidade.h"
#include <iostream>

void Jogo::atirar(char tecla){
    if (tecla == 97){
        if (Tabuleiro::pecas[Tabuleiro::posicao_atual_x][Tabuleiro::posicao_atual_y - 1] == 1){
            Tabuleiro::pecas[Tabuleiro::posicao_atual_x][Tabuleiro::posicao_atual_y - 1] = 0;
            mostrar_labirinto();
        }
        else
            mostrar_labirinto();
    }

    else if (tecla == 115){
        if(Tabuleiro::pecas[Tabuleiro::posicao_atual_x + 1][Tabuleiro::posicao_atual_y] == 1){
            Tabuleiro::pecas[Tabuleiro::posicao_atual_x + 1][Tabuleiro::posicao_atual_y] = 0;
            mostrar_labirinto();
        }
        else
            mostrar_labirinto();
    }

    else if (tecla == 100){
        if(Tabuleiro::pecas[Tabuleiro::posicao_atual_x][Tabuleiro::posicao_atual_y + 1] == 1){
            Tabuleiro::pecas[Tabuleiro::posicao_atual_x][Tabuleiro::posicao_atual_y + 1] = 0;
            mostrar_labirinto();
        }
        else
        mostrar_labirinto();
    }

    else if (tecla == 119){
        if(Tabuleiro::pecas[Tabuleiro::posicao_atual_x - 1][Tabuleiro::posicao_atual_y] == 1){
            Tabuleiro::pecas[Tabuleiro::posicao_atual_x - 1][Tabuleiro::posicao_atual_y] = 0;
            mostrar_labirinto();
        }
        else
            mostrar_labirinto();
    }
}

int Jogo::mover(char tecla){
    if (tecla == 105){
        if (Tabuleiro::pecas[Tabuleiro::posicao_atual_x - 1][Tabuleiro::posicao_atual_y] == 0 || Tabuleiro::pecas[Tabuleiro::posicao_atual_x - 1][Tabuleiro::posicao_atual_y] == 5){
            Tabuleiro::pecas[Tabuleiro::posicao_atual_x][Tabuleiro::posicao_atual_y] = 1;
            Tabuleiro::pecas[Tabuleiro::posicao_atual_x - 1][Tabuleiro::posicao_atual_y] = 8;
            posicao_atual_x = posicao_atual_x - 1;
            mostrar_labirinto();
            if ((Tabuleiro::posicao_atual_x == Tabuleiro::posicao_final_x) && (Tabuleiro::posicao_atual_y == Tabuleiro::posicao_final_y)){
                return 1;
            }
            return 0;
        }
        else{
            // std::cout << "\nMovimento invalido!\n";
            std::cout << "\a";
            mostrar_labirinto();
            return 0;
        }
    }

    else if (tecla == 107){
        if (Tabuleiro::pecas[Tabuleiro::posicao_atual_x + 1][Tabuleiro::posicao_atual_y] == 0 || Tabuleiro::pecas[Tabuleiro::posicao_atual_x + 1][Tabuleiro::posicao_atual_y] == 5){
            Tabuleiro::pecas[Tabuleiro::posicao_atual_x][Tabuleiro::posicao_atual_y] = 1;
            Tabuleiro::pecas[Tabuleiro::posicao_atual_x + 1][Tabuleiro::posicao_atual_y] = 8;
            posicao_atual_x = posicao_atual_x + 1;
            mostrar_labirinto();
            if ((Tabuleiro::posicao_atual_x == Tabuleiro::posicao_final_x) && (Tabuleiro::posicao_atual_y == Tabuleiro::posicao_final_y)){
                return 1;
            }
            return 0;
        }
        else{
            mostrar_labirinto();
            std::cout << "\a";
            // std::cout << "\nMovimento invalido!\n";
            return 0;
        }
    }

    else if (tecla == 106){
        if (Tabuleiro::pecas[Tabuleiro::posicao_atual_x][Tabuleiro::posicao_atual_y - 1] == 0 || Tabuleiro::pecas[Tabuleiro::posicao_atual_x][Tabuleiro::posicao_atual_y - 1] == 5){
            Tabuleiro::pecas[Tabuleiro::posicao_atual_x][Tabuleiro::posicao_atual_y] = 1;
            Tabuleiro::pecas[Tabuleiro::posicao_atual_x][Tabuleiro::posicao_atual_y - 1] = 8;
            posicao_atual_y = posicao_atual_y - 1;
            mostrar_labirinto();
            if ((Tabuleiro::posicao_atual_x == Tabuleiro::posicao_final_x) && (Tabuleiro::posicao_atual_y == Tabuleiro::posicao_final_y)){
                return 1;
            }
            return 0;
        }
        else{
            mostrar_labirinto();
            std::cout << "\a";
            // std::cout << "\nMovimento invalido!\n";
            return 0;
        }
    }

    else if (tecla == 108){
        if (Tabuleiro::pecas[Tabuleiro::posicao_atual_x][Tabuleiro::posicao_atual_y + 1] == 0 || Tabuleiro::pecas[Tabuleiro::posicao_atual_x][Tabuleiro::posicao_atual_y + 1] == 5){
            Tabuleiro::pecas[Tabuleiro::posicao_atual_x][Tabuleiro::posicao_atual_y] = 1;
            Tabuleiro::pecas[Tabuleiro::posicao_atual_x][Tabuleiro::posicao_atual_y + 1] = 8;
            posicao_atual_y = posicao_atual_y + 1;
            mostrar_labirinto();
            if ((Tabuleiro::posicao_atual_x == Tabuleiro::posicao_final_x) && (Tabuleiro::posicao_atual_y == Tabuleiro::posicao_final_y)){
                return 1;
            }
            return 0;
        }
        else{
            mostrar_labirinto();
            std::cout << "\a";
            // std::cout << "\nMovimento invalido!\n";
            return 0;
        }
    }
    else
    {
        std::cout << "\a";
        mostrar_labirinto();
        return 0;
    }
    
}