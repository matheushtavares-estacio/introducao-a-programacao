#include <stdio.h>

// VARIÁVEIS
int tabuleiro[10][10] = {0};
int navioHorizontal[3] = {3, 3, 3}; 
int navioVertical[4] = {3, 3, 3, 3};
int linhaNavioH = 2, colunaNavioH = 1;
int linhaNavioV = 1, colunaNavioV = 6;

int main(){
    // POSICIONAR NAVIO HORIZONTAL
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linhaNavioH][colunaNavioH] = navioHorizontal[i];
        colunaNavioH++;
    }

    // POSICIONAR NAVIO VERTICAL
    for (int i = 0; i < 4; i++)
    {
        tabuleiro[linhaNavioV][colunaNavioV] = navioVertical[i];
        linhaNavioV++;
    }

    // PRINT TABULEIRO
    for (int i = 0; i < 10; i++)
    {
        printf("|");
        for (int j = 0; j < 10; j++)
        {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("|\n");
    } 

    return 0;
}