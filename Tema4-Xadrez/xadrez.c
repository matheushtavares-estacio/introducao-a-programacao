#include <stdio.h>

int main(){
    // === CONTADORES ===
    int cont1 = 1, cont2 = 1, cont3 = 1;

    // === TORRE (While) ===
    printf("\nJogador #1 está movendo a Torre...\n");
    while (cont1 <= 5)
    {
        printf("DIREITA\n");
        cont1++;
    }

    // === TORRE ===
    printf("\nJogador #1 está movendo o Bispo...\n");
    do
    {
        printf("DIAGONAL (DIREITA + CIMA)\n");
        cont2++;
    } while (cont2 <= 5);
 
    // === RAINHA ===
    printf("\nO Jogador #1 está movendo a Rainha...\n");
    for (cont3; cont3 <= 8; cont3++)
    {
        printf("ESQUERDA\n");
    }
    
    return 0;
}