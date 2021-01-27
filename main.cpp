#include "Tabuleiro.h"
#include "Jogabilidade.h"

#include <ctime>
#include <chrono>
#include <unistd.h>
#include <iostream>

int main(){
    int i=0, j=0, k=0, l=0;
    system("clear");
    std::cout << "Bem vindo ao jogo! Faca o 8 encontrar o 5 no menor tempo possivel!\n";
    std::cout << "Teclas para mover: i(cima), j(esquerda), k(baixo), l(direita).\n"; 
    std::cout << "Teclas para atirar: w(cima), a(esquerda), s(baixo), d(direita).\n";
    std::cout << "1's representam barreiras. 0's, caminhos livres. Atire tres vezes para a barreira quebrar!\n";
    std::cout << "Digite o tamanho do tabuleiro (2 a 35): ";
    int tamanho, cartucho = 9;
    std::cin >> tamanho;
    Jogo* jogo = new Jogo(tamanho);
    system("clear");
    jogo->mostrar_labirinto();
    auto start = std::chrono::system_clock::now();
    while (1){
        system("stty raw");
        int tecla = getchar();
        system("stty cooked");

        if (tecla > 96) {
            if (tecla == 113){
                break;
            }
            else if (tecla == 97 || tecla == 100 || tecla == 115 || tecla == 119){
                system("clear");
                if(tecla == 97){
                    i++;
                    if (i==3){
                        i = 0;
                        cartucho-=3;
                        if (cartucho > 0)
                            jogo->atirar(tecla);
                        else
                        {
                            jogo->mostrar_labirinto();
                        }
                    }
                    else
                    {
                        jogo->mostrar_labirinto();
                    }
                    
                }
                else if(tecla == 100){
                    j++;
                    if (j==3){
                        j = 0;
                        cartucho-=3;
                        if (cartucho > 0)
                            jogo->atirar(tecla);
                        else
                        {
                            jogo->mostrar_labirinto();
                        }
                    }
                    else
                    {
                        jogo->mostrar_labirinto();
                    }
                    
                }
                else if(tecla == 115){
                    k++;
                    if (k==3){
                        k = 0;
                        cartucho-=3;
                        if (cartucho > 0)
                            jogo->atirar(tecla);
                        else
                        {
                            jogo->mostrar_labirinto();
                        }
                    }
                    else
                    {
                        jogo->mostrar_labirinto();
                    }
                    
                }

                else if (tecla == 119){
                    l++;
                    if (l==3){
                        l = 0;
                        cartucho-=3;
                        if (cartucho > 0)
                            jogo->atirar(tecla);
                        else
                        {
                            jogo->mostrar_labirinto();
                        }
                    }
                    else
                    {
                        jogo->mostrar_labirinto();
                    }
                    
                }
            }
            else{
                system("clear");
                auto end = std::chrono::system_clock::now();
                if(jogo->mover(tecla)){
                    std::cout << "\nVoce chegou ao fim!\n";
                    std::chrono::duration<double> elapsed_seconds = end-start;
                    std::cout << "Voce demorou " << elapsed_seconds.count() << " segundos na Terra!\n\n";
                    break;
                }
            }    
        } 
    }
    return 0;
}