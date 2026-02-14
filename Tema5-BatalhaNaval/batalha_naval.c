#include <stdio.h>

// VARIÁVEIS
int tabuleiro[10][10] = {0};
int navioHorizontal[3] = {3, 3, 3}; 
int navioVertical[3] = {3, 3, 3};
int navioDiagonal1[3] = {3, 3, 3};
int navioDiagonal2[3] = {3, 3, 3};
int linhaNavioH = 0, colunaNavioH = 0;
int linhaNavioV = 2, colunaNavioV = 2;
int linhaNavioD1 = 2, colunaNavioD1 = 4;
int linhaNavioD2 = 6, colunaNavioD2 = 8;

int main(){
    // POSICIONAR NAVIO HORIZONTAL
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linhaNavioH][colunaNavioH] = navioHorizontal[i];
        colunaNavioH++;
    }

    // POSICIONAR NAVIO VERTICAL
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linhaNavioV][colunaNavioV] = navioVertical[i];
        linhaNavioV++;
    }

    // POSICIONAR SEGUNDO NAVIO DIAGONAL
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linhaNavioD2][colunaNavioD2] = navioDiagonal2[i];
        linhaNavioD2++;
        colunaNavioD2--;
    }

    // POSICIONAR PRIMEIRO NAVIO DIAGONAL
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linhaNavioD1][colunaNavioD1] = navioDiagonal1[i];
        linhaNavioD1++;
        colunaNavioD1++;
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