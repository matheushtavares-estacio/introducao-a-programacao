#include <stdio.h>

int main(){
    // === VARIÁVEIS ===
    char pais1[30], pais2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int num_pturisticos1, num_pturisticos2;
    float den_populacional1, den_populacional2;
    int opcao;

    // === CADASTRO CARTA #1 ===
    printf("\n=== CADASTRO CARTA #1 ===\n");

    printf("PAÍS: ");
    scanf("%s", pais1);

    printf("POPULAÇÃO: ");
    scanf("%d", &populacao1);

    printf("ÁREA: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("NÚMERO DE PONTOS TURÍSTICOS: ");
    scanf("%d", &num_pturisticos1);

    // === CADASTRO CARTA #2 ===
    printf("\n=== CADASTRO CARTA #2 ===\n");

    printf("PAÍS: ");
    scanf("%s", pais2);

    printf("POPULAÇÃO: ");
    scanf("%d", &populacao2);

    printf("ÁREA: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("NÚMERO DE PONTOS TURÍSTICOS: ");
    scanf("%d", &num_pturisticos2);

    // === CALCULOS ===
    den_populacional1 = (float)populacao1 / area1;
    den_populacional2 = (float)populacao2 / area2;

    // === MENU INTERATIVO ===
    printf("\n=== RESULTADOS ===\n");
    printf("QUAIS ATRIBUTOS VOCÊ DESEJA COMPARAR?\n");
    printf("[ 1 ] PAÍS;\n");
    printf("[ 2 ] POPULAÇÃO;\n");
    printf("[ 3 ] ÁREA;\n");
    printf("[ 4 ] PIB;\n");
    printf("[ 5 ] NÚMERO DE PONTOS TURÍSTICOS;\n");
    printf("[ 6 ] DENSIDADE DEMOGRÁFICA;\n");
    scanf("%d", &opcao);

    // === COMPARAÇÕES ===
    switch (opcao)
    {
    case 1:
        printf("OS PAÍSES INSERIDOS SÃO: %s E %s.\n", pais1, pais2);
        break;
    
    case 2:
        printf("%s => POPULAÇÃO => %d\n", pais1, populacao1);
        printf("%s => POPULAÇÃO => %d\n", pais2, populacao2);
        if (populacao1 > populacao2){
            printf("%s GANHOU!\n", pais1);
        }
        else if (populacao2 > populacao1){
            printf("%s GANHOU!\n", pais2);
        }
        else{
            printf("EMPATE!\n");
        }
        break;

    case 3:
        printf("%s => ÁREA => %f\n", pais1, area1);
        printf("%s => ÁREA => %f\n", pais2, area2);
        if (area1> area2){
            printf("%s GANHOU!\n", pais1);
        }
        else if (area2 > area1){
            printf("%s GANHOU!\n", pais2);
        }
        else{
            printf("EMPATE!\n");
        }
        break;

    case 4:
        printf("%s => PIB => %f\n", pais1, pib1);
        printf("%s => PIB => %f\n", pais2, pib2);
        if (pib1 > pib2){
            printf("%s GANHOU!\n", pais1);
        }
        else if (pib2 > pib1){
            printf("%s GANHOU!\n", pais2);
        }
        else{
            printf("EMPATE!\n");
        }
        break;

    case 5:
        printf("%s => NÚMERO DE PONTOS TURÍSTICOS => %d\n", pais1, num_pturisticos1);
        printf("%s => NÚMERO DE PONTOS TURÍSTICOS => %d\n", pais2, num_pturisticos2);
        if (num_pturisticos1 > num_pturisticos2){
            printf("%s GANHOU!\n", pais1);
        }
        else if (num_pturisticos2 > num_pturisticos1){
            printf("%s GANHOU!\n", pais2);
        }
        else{
            printf("EMPATE!\n");
        }
        break;

    case 6:
        printf("%s => DENSIDADE DEMOGRÁFICA => %f\n", pais1, den_populacional1);
        printf("%s => DENSIDADE DEMOGRÁFICA => %f\n", pais2, den_populacional2);
        if (den_populacional1 < den_populacional2){
            printf("%s GANHOU!\n", pais1);
        }
        else if (den_populacional2 < den_populacional1){
            printf("%s GANHOU!\n", pais2);
        }
        else{
            printf("EMPATE!\n");
        }
        break;

    default:
        printf("OPÇÃO INVÁLIDA!\n");
        break;
    }

    printf("PROGRAMA ENCERRADO!");
    return 0;
}