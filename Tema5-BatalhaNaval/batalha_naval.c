#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define LINHA_HABILIDADE 3
#define COLUNA_HABILIDADE 5

// MATRIZES
int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};
int cone[LINHA_HABILIDADE][COLUNA_HABILIDADE] = {0};
int cruz[LINHA_HABILIDADE][COLUNA_HABILIDADE] = {0};
int octaedro[LINHA_HABILIDADE][COLUNA_HABILIDADE] = {0};

// VARIÁVEIS

// NAVIO HORIZONTAL
int navioHorizontal[3] = {3, 3, 3}; 
int linhaNavioH = 0, colunaNavioH = 0;

// NAVIO VERTICAL
int navioVertical[3] = {3, 3, 3};
int linhaNavioV = 2, colunaNavioV = 2;

// NAVIOS DIAGONAIS
int navioDiagonal1[3] = {3, 3, 3};
int navioDiagonal2[3] = {3, 3, 3};
int linhaNavioD1 = 2, colunaNavioD1 = 4;
int linhaNavioD2 = 6, colunaNavioD2 = 8;

// CONE
int larguraCone = 0;
int meioCone = (COLUNA_HABILIDADE / 2);
int origemConeL = 0, origemConeC = 0;

// CRUZ
int meioLinhasCruz = LINHA_HABILIDADE / 2;
int meioColunasCruz = COLUNA_HABILIDADE / 2;
int origemCruzL = 4, origemCruzC = 0;

// OCTAEDRO
int larguraOctaedro = 0;
int meioOctaedro = (COLUNA_HABILIDADE / 2);
int origemOctaL = 7, origemOctaC = 5;

int main(){
    // HABILIDADE - CONE
    for (int i = 0; i < LINHA_HABILIDADE; i++)
    {
        for (int j = 0; j < COLUNA_HABILIDADE; j++)
        {
            {
                if (j >= (meioCone - larguraCone) && j <= (meioCone + larguraCone))
                {
                    cone[i][j] = 1;                 
                }
            }
        }
        larguraCone++;
    }

    // HABILIDADE - CRUZ
    for (int i = 0; i < LINHA_HABILIDADE; i++)
    {
        for (int j = 0; j < COLUNA_HABILIDADE; j++)
        {
            {
                if ((i == meioLinhasCruz || j == meioColunasCruz))
                {
                    cruz[i][j] = 1;                 
                }
            }
        }
    }

// HABILIDADE - OCTAEDRO
    for (int i = 0; i < LINHA_HABILIDADE; i++)
    {
        for (int j = 0; j < COLUNA_HABILIDADE; j++)
        {
            {
                if (j >= (meioOctaedro - larguraOctaedro) && j <= (meioOctaedro + larguraOctaedro))
                {
                    octaedro[i][j] = 1;                 
                }
            }
        }
        if (i < LINHA_HABILIDADE / 2)
        {
            larguraOctaedro++;
        }
        else{
            larguraOctaedro--;
        }
    }

    // PRINT CONE
    for (int i = 0; i < LINHA_HABILIDADE; i++)
    {
        printf("|");
        for (int j = 0; j < COLUNA_HABILIDADE; j++)
        {
            printf(" %d ", cone[i][j]);
        }
        printf("|\n");
    }

    printf("\n");

    // PRINT CRUZ
    for (int i = 0; i < LINHA_HABILIDADE; i++)  
    {
        printf("|");
        for (int j = 0; j < COLUNA_HABILIDADE; j++)
        {
            printf(" %d ", cruz[i][j]);
        }
        printf("|\n");
    }

    printf("\n");

    // PRINT OCTAEDRO
    for (int i = 0; i < LINHA_HABILIDADE; i++)  
    {
        printf("|");
        for (int j = 0; j < COLUNA_HABILIDADE; j++)
        {
            printf(" %d ", octaedro[i][j]);
        }
        printf("|\n");
    }

    printf("\n");

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

    // POSICIONAMENTO CONE
    for (int i = 0; i < LINHA_HABILIDADE; i++)
    {
        for (int j = 0; j < COLUNA_HABILIDADE; j++)
        {
            if (cone[i][j] == 1)
            {
                tabuleiro[i + origemConeL][j + origemConeC] = 1;
            }
        }
    }

    // POSICIONAMENTO CRUZ
    for (int i = 0; i < LINHA_HABILIDADE; i++)
    {
        for (int j = 0; j < COLUNA_HABILIDADE; j++)
        {
            if (cruz[i][j] == 1)
            {
                tabuleiro[i + origemCruzL][j + origemCruzC] = 1;
            }
        }
    }
    
        // POSICIONAMENTO CONE
    for (int i = 0; i < LINHA_HABILIDADE; i++)
    {
        for (int j = 0; j < COLUNA_HABILIDADE; j++)
        {
            if (octaedro[i][j] == 1)
            {
                tabuleiro[i + origemOctaL][j + origemOctaC] = 1;
            }
        }
    }
    
    // PRINT TABULEIRO
    for (int i = 0; i < TAMANHO_TABULEIRO; i++)
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