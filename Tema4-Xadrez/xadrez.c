#include <stdio.h>

// 1. FUNÇÕES

// FUNÇÃO TORRE
void moverTorre(int casasTorre, char direcaoTorre[]){
    // 1. CASO BASE
    if (casasTorre == 0){
        return;
    }

    // 2. MOVIMENTO
    printf("%s\n", direcaoTorre);

    // 3. CASO RECURSIVO
    moverTorre(casasTorre -1, direcaoTorre);
}

// FUNÇÃO BISPO
void moverBispo(int casasBispo, char direcaoBispo1[], char direcaoBispo2[]){
    // 1. CASO BASE
    if (casasBispo == 0){
        return;
    }

    // 2. MOVIMENTO
    printf("DIAGONAL (%s + %s)\n", direcaoBispo1, direcaoBispo2);

    // 3. CASO RECURSIVO
    moverBispo(casasBispo -1, direcaoBispo1, direcaoBispo2);
}

// FUNÇÃO RAINHA
void moverRainha(int movimentoRainha, int casasRainha, char direcaoRainha1[], char direcaoRainha2[]){
    // CASO BASE
    if (casasRainha == 0){
        return;
    }

    // MOVIMENTO EM LINHA RETA:
    if (movimentoRainha == 1){
        printf("%s\n", direcaoRainha1);
    }

    // MOVIMENTO DIAGONAL
    if (movimentoRainha == 2){
        printf("DIAGONAL (%s + %s)\n", direcaoRainha1, direcaoRainha2);
    }

    // CASO RECURSIVO
    moverRainha(movimentoRainha, casasRainha - 1, direcaoRainha1, direcaoRainha2);
}

// FUNÇÃO CAVALO
void moverCavalo(int casasCavalo, char direcaoCavalo1[], char direcaoCavalo2[]){
    // 1. CASO BASE
    if (casasCavalo == 0){
        return;
    }

    // 2. MOVIMENTOS
    else if (casasCavalo > 1){
    printf("%s\n", direcaoCavalo1);
    }

    else{
        printf("%s\n", direcaoCavalo2);
    }

    // 3. CASO RECURSIVO;
    moverCavalo(casasCavalo -1, direcaoCavalo1, direcaoCavalo2);
}

// 2. VARIÁVEIS
int casasTorre, casasBispo, movimentoRainha, casasRainha, casasCavalo = 3, continuar = 1;
char direcaoTorre[10], direcaoBispo1[10], direcaoBispo2[10], direcaoRainha1[10], direcaoRainha2[10], direcaoCavalo1[10], direcaoCavalo2[10];

// 3. FUNÇÃO PRINCIPAL
int main(){
    // MOVIMENTO TORRE
    printf("\nDefina o número de casas que a Torre irá se mover:\n>> ");
    scanf("%d", &casasTorre);
    printf("\nDefina a direção que a Torre irá se mover:\n>> ");
    scanf("%s", direcaoTorre);
    printf("\nMovendo a Torre...\n");
    moverTorre(casasTorre, direcaoTorre);

    // MOVIMENTO BISPO - RECURSIVIDADE
    printf("\nDefina o número de casas que o Bispo irá se mover:\n>> ");
    scanf("%d", &casasBispo);
    printf("\nDefina a direção HORIZONTAL que o Bispo irá se mover:\n>> ");
    scanf("%s", direcaoBispo1);
    printf("\nDefina a direção VERTICAL que o Bispo irá se mover:\n>> ");
    scanf("%s", direcaoBispo2);
    printf("\nMovendo o Bispo...\n");
    moverBispo(casasBispo, direcaoBispo1, direcaoBispo2);

    // MOVIMENTO BISPO - LOOPS ANINHADOS

    while (continuar != 0)
        {
        printf("\nDefina o número de casas que o Bispo irá se mover:\n>> ");
        scanf("%d", &casasBispo);
        printf("\nDefina a direção HORIZONTAL que o Bispo irá se mover:\n>> ");
        scanf("%s", direcaoBispo1);
        printf("\nDefina a direção VERTICAL que o Bispo irá se mover:\n>> ");
        scanf("%s", direcaoBispo2);
        printf("\nMovendo o Bispo...\n");
        while (casasBispo != 0)
            {
                printf("DIAGONAL (%s + %s)\n", direcaoBispo1, direcaoBispo2);
                casasBispo--;
            }
        printf("\nDESEJA CONTINUAR?\n");
        printf("DIGITE 0 PARA PARAR...\n");
        printf("DIGITE QUALQUER OUTRO NÚMERO PARA CONTINUAR...\n>> ");
        scanf("%d", &continuar);
    }

    // MOVIMENTO RAINHA
    printf("\nDefina o movimento da Rainha:\n");
    printf("[ 1 ] LINHA RETA\n");
    printf("[ 2 ] DIAGONAL\n>> ");
    scanf("%d", &movimentoRainha);

    switch (movimentoRainha)
    {
    // LINHA RETA
    case 1:
        printf("\nDefina o número de casas que a Rainha irá se mover:\n>> ");
        scanf("%d", &casasRainha);
        printf("\nDefina a direção que a Rainha irá se mover:\n>> ");
        scanf("%s", direcaoRainha1);
        direcaoRainha2[0] = '\0';
        printf("\nMovendo a Rainha...\n");
        moverRainha(movimentoRainha, casasRainha, direcaoRainha1, direcaoRainha2);
        break;
    
    // DIAGONAL
    case 2:
        printf("\nDefina o número de casas que a Rainha irá se mover:\n>> ");
        scanf("%d", &casasRainha);
        printf("\nDefina a direção HORIZONTAL que a Rainha irá se mover:\n>> ");
        scanf("%s", direcaoRainha1);
        printf("\nDefina a direção VERTICAL que a Rainha irá se mover:\n>> ");
        scanf("%s", direcaoRainha2);
        printf("\nMovendo a Rainha...\n");
        moverRainha(movimentoRainha, casasRainha, direcaoRainha1, direcaoRainha2);
        break;
    
    default:
        printf("Entrada Inválida!\n");
        break;
    }

    // MOVIMENTO CAVALO - RECURSIVIDADE
    printf("\nDefina a direção que o Cavalo irá se mover DUAS casas:\n>> ");
    scanf("%s", direcaoCavalo1);
    printf("\nDefina a direção que o Cavalo irá se mover UMA casa:\n>> ");
    scanf("%s", direcaoCavalo2);
    printf("\nMovendo o Cavalo...\n");
    moverCavalo(casasCavalo, direcaoCavalo1, direcaoCavalo2);

    // MOVIMENTO CAVALO - LOOPS ANINHADOS
    printf("\nDefina a direção que o Cavalo irá se mover DUAS casas:\n>> ");
    scanf("%s", direcaoCavalo1);
    printf("\nDefina a direção que o Cavalo irá se mover UMA casa:\n>> ");
    scanf("%s", direcaoCavalo2);
 
    printf("\nMovendo o Cavalo...\n");
    for (int i = 1; i != 0; i--)
    {
        for (int j = 2; j != 0; j--)
        {
            printf("%s\n", direcaoCavalo1);
        }
        printf("%s\n", direcaoCavalo2);
    }
    
    return 0;
}