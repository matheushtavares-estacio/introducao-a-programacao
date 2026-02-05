#include <stdio.h>

int main(){
    // === CONTADORES ===
    int iTorre = 1;
    int iBispo = 1; 
    int continuar = 1, quantidadeCasasH, quantidadeCasasV, opcaoVertical, opcaoHorizontal;

    // === TORRE (While) ===
    printf("\nJogador #1 está movendo a Torre...\n");
    while (iTorre <= 5)
    {
        printf("DIREITA\n");
        iTorre++;
    }

    // === TORRE ===
    printf("\nJogador #1 está movendo o Bispo...\n");
    do
    {
        printf("DIAGONAL (DIREITA + CIMA)\n");
        iBispo++;
    } while (iBispo <= 5);
 
    // === RAINHA ===
    printf("\nO Jogador #1 está movendo a Rainha...\n");
    for (int iRainha = 1; iRainha <= 8; iRainha++)
    {
        printf("ESQUERDA\n");
    }

    // === CAVALO - VERSÃO 1.0 (Loops aninhados) ===
    printf("\nO Jogador #1 está movendo o Cavalo...\n");
    for (int iCavalo = 1; iCavalo <= 1 ; iCavalo++)
    {
        for (int jCavalo = 1; jCavalo <= 2; jCavalo++)
        {
            printf("BAIXO\n");
        }
        printf("ESQUERDA\n");
    }
    
    // === CAVALO - VERSÃO 2.0 (Menu interativo) ===
    printf("\nO Jogador #1 está movendo o Cavalo...\n");

    while (continuar != 0)
    {
        // === MENU INTERATIVO ===
        printf("Defina o movimento HORIZONTAL:\n");
        printf("[ 1 ] ESQUERDA\n");
        printf("[ 2 ] DIREITA\n>> ");
        scanf("%d", &opcaoHorizontal);

        printf("Quantas casas irá se mover no sentido HORIZONTAL?\n");
        printf("[ 1 ] 1 CASA\n");
        printf("[ 2 ] 2 CASAS\n>> ");
        scanf("%d", &quantidadeCasasH);

        quantidadeCasasV = 3 - quantidadeCasasH;

        printf("Defina o movimento VERTICAL:\n");
        printf("[ 1 ] CIMA\n");
        printf("[ 2 ] BAIXO\n>> ");
        scanf("%d", &opcaoVertical);

        if ((opcaoVertical == 1 || opcaoVertical == 2) && (opcaoHorizontal == 1 || opcaoHorizontal == 2) && (quantidadeCasasH == 1 || quantidadeCasasH == 2))
        {
            for (int j = 1; j <= quantidadeCasasH; j++)
            {
                opcaoHorizontal == 1? printf("ESQUERDA\n") : printf("DIREITA\n");
            }
            for (int i = 1; i <= quantidadeCasasV; i++)
            {        
                opcaoVertical == 1? printf("CIMA\n") : printf("BAIXO\n");
            }
        }
        else{
            printf("Entrada INVÁLIDA! Tente novamente...\n");
        }

        // === CONTINUAR ===
        printf("Deseja continuar?\n");
        printf("Digite qualquer número para continuar...\n");
        printf("Digite '0' para parar...\n>> ");
        scanf("%d", &continuar);
    }
    
    printf("\nPrograma encerrado.\n");

    return 0;
}